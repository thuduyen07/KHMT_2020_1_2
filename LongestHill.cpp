/*
	LongestHill() tra ve so phan tu co mang con dai nhat co gia tri tang roi giam dan
*/

#include <iostream>
using namespace std;

int LongestHill(int A[], int N) {
	int longestHill = 0;
	int count, i = 0;
	while (i < N-1) {
		count = 0;
		while (i < N - 1 && A[i] <= A[i + 1]) { 
			count += 1;	
			i++;
		}
		while (i < N - 1 && A[i] >= A[i + 1]) {
			count += 1; 
			i++;
		}
		count++; // vi so theo cap nen count dang the hien gia tri cap, ta can dem them gia tri cuoi vao luc nay
		if (longestHill < count) {
			longestHill = count;
		}
	}
	return longestHill;
}
