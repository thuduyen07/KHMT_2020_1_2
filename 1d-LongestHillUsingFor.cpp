//#include <iostream>
//
//using namespace std;
//
//int longesthill(int a[], int arraysize) {
//
//	int max = 0;
//
//	for (int j = 0; j < arraysize - 1; j++) {
//
//		int count = 0;
//		int i = 0;
//
//		// count the increasing part
//		for (i; i < arraysize; i++) {
//			if (a[i] <= a[i + 1]) {
//				count++;
//			}
//			else {
//				break;
//			}
//		}
//
//		// return -1 if the chain has increasing part only
//		if (count == 0) {
//			return -1;
//		}
//
//		// count the decreasing part
//		for (i; i < arraysize; i++) {
//			if (a[i] >= a[i + 1]) {
//				count++;
//			}
//			else {
//				break;
//			}
//		}
//
//		count = count + 1; // count the last element 
//
//		// check if the current chain is longest
//		if (count > max) {
//			max = count;
//		}
//	}
//	
//	return max;
//}
//
//void printarray(int a[], int arraysize) {
//
//	for (int i = 0; i < arraysize; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//
//	// enter array size
//	int arraysize = -1;
//	while (arraysize < 0) {
//		cout << "enter array size: ";
//		cin >> arraysize;
//	}
//
//	// create a random array with the given size
//	int* a = new int(arraysize);
//	for (int i = 0; i < arraysize; i++) {
//		a[i] = rand() % 100;
//	}
//
//	printarray(a, arraysize);
//
//	cout << longesthill(a, arraysize);
//}