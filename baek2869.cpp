#include <iostream>

int main(void) {
	int A, B, V;
	int day = 0;

	scanf("%d %d %d", &A, &B, &V);

	day = (V - B - 1) / (A - B) + 1;
	printf("%d\n", day);
	
	return 0;
}