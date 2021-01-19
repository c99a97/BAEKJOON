#include <iostream>

using namespace std;

int main(void) {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int min[2];
	if (w - x < x)
		min[0] = w - x;
	else
		min[0] = x;

	if (h - y < y)
		min[1] = h - y;
	else
		min[1] = y;

	printf("%d\n", (min[0] < min[1] ? min[0] : min[1]));

	return 0;
}