#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int C, N;
	vector<int> A;

	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		double sum = 0;
		int count = 0;
		scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			int tmp;
			scanf("%d", &tmp);
			sum += tmp;
			A.push_back(tmp);
		}
		sum /= N;
		sort(A.begin(), A.end(), greater<int>());
		for (vector<int>::iterator iter = A.begin(); iter < A.end(); ++iter) {
			if (*iter > sum)
				count++;
			else
				break;
		}
		printf("%.3lf%%\n", (double)count / N*100);
		A.clear();
	}
	return 0;
}