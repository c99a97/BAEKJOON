#include <iostream>

using namespace std;

int main(void) {
	int target, now = 1, cnt = 1;

	scanf("%d", &target);
	while (now < target)
		now += 6 * cnt++;
	printf("%d\n", cnt);

	return 0;
}