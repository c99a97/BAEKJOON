#include <iostream>

using namespace std;

int main(void) {
	int t, i, j;

	scanf("%d", &t);
	for (int n = 0; n < t; n++) {
		scanf("%d %d", &i, &j);
		printf("Case #%d: %d + %d = %d\n", n+1, i, j, i+j);
	}
	return 0;
}