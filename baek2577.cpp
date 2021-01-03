#include <iostream>

using namespace std;

int main(void) {
	int A, B, C, val;
	int cnt[10] = { 0 };

	scanf("%d\n%d\n%d", &A, &B, &C);
	val = A * B * C;
	while (val > 0) {
		cnt[val % 10]++;
		val /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);

	return 0;
}