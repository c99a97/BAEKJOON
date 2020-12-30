#include <iostream>

using namespace std;

int main(void) {
	int R, C, W, sum = 0;
	int pascal[30][30];

	scanf("%d %d %d", &R, &C, &W);
	for (int i = 0; i < 30; i++) {
		int j;
		pascal[i][0] = 1;
		for (j = 1; j < i; j++) {
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
		pascal[i][j] = 1;
	}

	for (int i = R - 1; i < R - 1 + W; i++)
		for (int j = C - 1; j < i - R + C + 1; j++)
			sum += pascal[i][j];

	printf("%d\n", sum);
	return 0;
}