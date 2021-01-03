#include <iostream>

using namespace std;

int main(void) {
	int N, max=-1000001, min=1000001;

	scanf("%d", &N);

	while (N--) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp > max)
			max = tmp;
		if (tmp < min)
			min = tmp;
	}
	printf("%d %d\n", min, max);

	return 0;
}