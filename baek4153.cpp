#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void) {
	int length[3];

	while (1) {
		scanf("%d %d %d", &length[0], &length[1], &length[2]);
		if (length[0] == 0 && length[1] == 0 && length[2] == 0)
			break;
		sort(length, length + 3, greater<int>());

		if (pow(length[0], 2) == pow(length[1], 2) + pow(length[2], 2))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}