#include <iostream>

using namespace std;

int main(void) {
	int max = -1, n;

	for (int i = 0; i < 9; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp > max) {
			max = tmp;
			n = i + 1;
		}
	}
	printf("%d\n%d\n", max, n);

	return 0;
}