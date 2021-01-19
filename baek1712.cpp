#include <iostream>

using namespace std;

int main(void) {
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);
	if (C - B <= 0) {
		if (A == 0)
			printf("0\n");
		else
			printf("-1\n");
	}
	else {
		printf("%d\n", A / (C - B) + 1);
	}

	return 0;
}