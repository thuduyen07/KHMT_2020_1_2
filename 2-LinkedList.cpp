#include <iostream>
using namespace std;

class Node {
public: 
	int data;
	Node* next;
};

// print whole list
void printList(Node* head) {

	cout << "Current linked list is: ";
	Node* node = head;

	if (head == NULL) {
		cout << "Linked list is empty" << endl;
	}

	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
	cout << endl;
}

// add node with data is k to the last of the linked list
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

// delete the last node and return its value
int peekList(Node*& head) {

	Node* temp = head;
	int result = -1;

	if (head == NULL) {
		return result;
	}
	else if (head->next == NULL) {
		result = head->data;
		head = NULL;
		return result;
	}
	else {
		while (head->next->next != NULL) {
			head = head->next;
		}
		result = head->next->data;
		head->next = NULL;
		head = temp;
	}
	return result;
}

// create a linked list
Node* createList() {

	Node* head = NULL;

	int nodeNumber = -1;
	while (nodeNumber < 0) {
		cout << "Enter number of node: ";
		cin >> nodeNumber;
	}

	for (int i = 0; i < nodeNumber; i++) {
		addToLast(head, rand() % 100);
	}
	
	return head;
}

// delete the k-th node 
Node* remove_k_th_node(Node*& head) {

	Node* temp = head;

	int k = -1;
	while (k < 0) {
		cout << "Enter k: ";
		cin >> k;
	}

	// in case linked list is empty
	if (head == NULL) {
		cout << "Error: Can not remove the " << k << "-th node" << endl;
		return NULL;
	}

	// in case find the first node
	if (k == 1) {
		peekList(head);
		return NULL;
	}
	
	// in case k>1
	for (int i = 1; head->next != NULL && i < k; i++) {
		head = head->next;
	}
	Node* nodeToDelete = head->next;
	head->next = nodeToDelete->next;
	delete nodeToDelete;
	head = temp;
	return head;
}

int main() {

	Node* head = createList();
	printList(head);

	//int peekListResult = peekList(head);
	//cout << peekListResult << endl;
	//printList(head);

	cout << "Linked list after add 10 to last" << endl;
	addToLast(head, 10);
	printList(head);

	cout << "Linked list after remove k-th node" << endl;
	remove_k_th_node(head);
	printList(head);

}