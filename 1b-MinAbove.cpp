//#include <iostream>
//
//using namespace std;
//
//// return -1 if min above A[k] is not exist
//int MinAbove(int A[], int arraySize, int k) {
//
//	int min = 1000; // because given random array elements in [0, 100]
//	for (int i = 0; i < arraySize; i++) {
//		if (A[i]<min && A[i]>A[k]) {
//			min = A[i];
//		}
//	}
//
//	return min;
//}
//
//void printArray(int A[], int arraySize) {
//	for (int i = 0; i < arraySize; i++) {
//		cout << A[i] << " ";
//	}
//	cout << endl;
//}
//
//void main() {
//
//	// enter array size
//	int arraySize = -1;
//	while (arraySize < 0) {
//		cout << "Enter array size: ";
//		cin >> arraySize;
//	}
//
//	// create a random array
//	int* A = new int(arraySize);
//	for (int i = 0; i < arraySize; i++) {
//		A[i] = rand() % 100;
//	}
//
//	cout << "Array is: ";
//	printArray(A, arraySize);
//
//	int k = -1;
//	while (k < 0) {
//		cout << "Enter k: ";
//		cin >> k;
//	}
//	cout << "A[" << k << "]=" << A[k] << endl;
//
//	cout << "Max below is: " << MinAbove(A, arraySize, k) << endl;
//
//}