#include <iostream>

using namespace std;

int main(void) {
	int h, m;

	scanf("%d %d", &h, &m);
	if (m < 45)
		h = (h + 23) % 24;
	m = (m + 15) % 60;
	printf("%d %d\n", h, m);

	return 0;
}