#include <iostream>

using namespace std;

int main(void) {
	int N, answer = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int sum = i, tmp = i;
		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == N) {
			answer = i;
			break;
		}
	}
	printf("%d\n", answer);

	return 0;
}