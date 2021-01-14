#include <stdio.h>

int main(void) {
	int N, input[100000] = { 0, };
	int min, cnt;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &input[i]);
	}

	min = input[N - 1];
	cnt = 1;
	for (int i = N - 1; i >= 0; i--) {
		if (min < input[i]) {
			cnt++;
			min = input[i];
		}
	}
	printf("%d\n", cnt);
	return 0;
}