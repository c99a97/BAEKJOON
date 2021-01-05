#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int N, M, min, goal;
	vector<int> V;

	scanf("%d %d", &N, &M);
	min = M;
	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d", &tmp);
		V.push_back(tmp);
	}
	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int tmp = V[i] + V[j] + V[k];
				if (tmp <= M && (min > M - tmp)) {
					min = M - tmp;
					goal = tmp;
				}
			}
		}
	}
	printf("%d\n", goal);

	return 0;
}