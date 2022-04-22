#include <iostream>
using namespace std;

class Node {
public: 
	int data;
	Node* next;
};

void addToLast(Node*& head, int k) {
	if (head == NULL) {
		head = new Node();
		head->data = k;
		head->next = NULL;
	} 
	else {
		Node* temp = head;

		Node* gaugau = new Node();
		gaugau->data = k;
		gaugau->next = NULL;

		while (head->next != NULL) {
			head = head->next;
		}
		head->next = gaugau;
		head = temp;
		gaugau = NULL;
		delete gaugau;
	}
}

void printList(Node* head) {
	Node* node = head;
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

int main() {
	Node* head = NULL;

	for (int i = 0; i < 10; i++) {
		addToLast(head, rand() % 100);
	}
	printList(head);
}