#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int N, sum;
	vector<int> A, B;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &sum);
		A.push_back(sum);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &sum);
		B.push_back(sum);
	}
	sort(A.begin(), A.end(), less<int>());
	sort(B.begin(), B.end(), greater<int>());
	sum = 0;
	for (int i = 0; i < N; i++)
		sum += A[i] * B[i];
	printf("%d\n", sum);

	return 0;
}