#include <iostream>

int main(void) {
	int N, cnt=0;

	scanf("%d", &N);
	while (N--) {
		int input;
		scanf("%d", &input);
		if (input != 1) {
			bool isPrime = true;
			for (int i = 2; i < input; i++) {
				if (input % i == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime == true)
				cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}