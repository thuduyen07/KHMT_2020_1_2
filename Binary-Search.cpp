/*
	Ham Search() tim gia tri X voi do phuc tap nho hon O(N)
	Tra ve vi tri neu tim thay X
	Tra ve -1 neu khong tim thay X
*/

/*
	Ham Binary Search co do phuc tap O(logN)
*/
int Search(int A[], int N, int X) {
	int left = 0, right = N - 1;
	int mid;
	while (left <= right) {
		int mid = (right + left) / 2;
		if (A[mid] == X) {
			return mid;
		}
		if (X < A[mid]) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return -1;
}
