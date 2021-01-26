#include <iostream>
using namespace std;

int main(void) {
	int N;
	int DP[11] = { 0, 1, 2, 4 };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int n;
		scanf("%d", &n);
		for (int j = 4; j <= n; j++) {
			DP[j] = DP[j - 1] + DP[j - 2] + DP[j - 3];
		}
		printf("%d\n", DP[n]);
	}
	
	return 0;
}