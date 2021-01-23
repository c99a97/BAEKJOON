#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int N, M;
	int min = 0, sum = 0;

	scanf("%d %d", &N, &M);
	for (int i = N; i <= M; i++) {
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime && i!=1) {
			sum += i;
			if (min == 0)
				min = i;
		}
	}

	if (min != 0) {
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else {
		printf("-1\n");
	}

	return 0;
}