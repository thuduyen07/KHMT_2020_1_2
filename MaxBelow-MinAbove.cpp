//#define Inf 1000000
//
///*
//	Cho mang A gom N so nguyen
//	a. Ham MaxBelow() tra ve gtln nho hon A[k]
//*/
//int MaxBelow(int A[], int N, int k) {
//	if (N <= 0 || k < 0 || k >= N) return -Inf;
//	int max_idx = -1; 
//	for (int i = 0; i < N; i++) {
//		if (A[i] < A[k] && (max_idx == -1 || A[max_idx] < A[i])) {
//			max_idx = i;
//		}
//	}
//	if (max_idx == -1) return -Inf;
//	return A[max_idx];
//}
//
///*
//	b. Ham MinAbove tra ve gtnn lon hon A[k]
//*/
//int MinAbove(int A[], int N, int k) {
//	if (N <= 0 || k < 0 || k >= N) return Inf;
//	int min_idx = -1;
//	for (int i = 0; i < N; i++) {
//		if (A[i] > A[k] && (min_idx == -1 || A[min_idx] > A[i])) {
//			min_idx = i;
//		}
//	}
//	if (min_idx == -1) {
//		return Inf;
//	}
//	return A[min_idx];
//}
