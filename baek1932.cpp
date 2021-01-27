#include <iostream>
#include <algorithm>
using namespace std;

inline int MAX(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
int main(void) {
	int N;
	int DP[500] = { 0 }, num[500] = { 0 };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++)
			scanf("%d", &num[j]);
		for (int j = i; j >= 0; j--) {
			if (j == 0)
				DP[j] = DP[j] + num[j];
			else if (j == i)
				DP[j] = DP[j - 1] + num[j];
			else
				DP[j] = MAX(DP[j] + num[j], DP[j - 1] + num[j]);
		}
	}
	sort(DP, DP+N, greater<int>());
	printf("%d\n", DP[0]);
	
	return 0;
}