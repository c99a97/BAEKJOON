#include <iostream>

using namespace std;

int main(void) {
	int i, j;

	while(1) {
		scanf("%d %d", &i, &j);
		if (i == 0 && j == 0)
			break;
		printf("%d\n", i + j);
	}
	return 0;
}