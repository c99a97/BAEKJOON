#include <iostream>

using namespace std;

int df(int a, int b, int c) {
	if (a == b)
		return c;
	else if (a == c)
		return b;
	else
		return a;
}

int main(void) {
	int xy[2][3] = {};

	for(int i=0; i<3; i++)
		scanf("%d %d", &xy[0][i], &xy[1][i]);

	int x, y;
	x = df(xy[0][0], xy[0][1], xy[0][2]);
	y = df(xy[1][0], xy[1][1], xy[1][2]);
	printf("%d %d\n", x, y);

	return 0;
}