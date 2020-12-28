#include <iostream>

using namespace std;

int main(void) {
	int i, j;

	while(scanf("%d %d", &i, &j)!=EOF) {
		printf("%d\n", i + j);
	}
	return 0;
}