#include <cstdio>

int N;

void facto(int cnt, int num) {
	if (cnt < N) {
		facto(cnt + 1, num * (cnt+1));
	}
	else {
		printf("%d\n", num);
	}
}

int main(void) {
	scanf("%d", &N);
	facto(0, 1);

	return 0;
}