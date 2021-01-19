#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int N;

	scanf("%d", &N);
	for (int i = 2; i <= sqrt((double)N);i++) {
		if (N % i == 0) {
			printf("%d\n", i);
			N /= i;
			i--;
		}
	}
	if (N != 1)
		printf("%d\n", N);

	return 0;
}