//#include <iostream>
//
//using namespace std;
//
//int MaxBelow(int A[], int arraySize, int k) {
//	
//	int max = -1;
//
//	for (int i = 0; i < arraySize; i++) {
//		if (A[i] > max && A[i] < A[k]) {
//			max = A[i];
//		}
//	}
//
//	return max;
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
//	cout << "Max below is: " << MaxBelow(A, arraySize, k) << endl;
//
//}