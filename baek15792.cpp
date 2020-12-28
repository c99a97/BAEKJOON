#include <iostream>

using namespace std;

int main(void) {
	int a, b, r;

	scanf("%d %d", &a, &b);
	printf("%d.", a / b);
	r = a % b;
	for (int i = 0; i <= 1000; i++) {
		r *= 10;
		printf("%d", r / b);
		r %= b;
	}
	cout << endl;

	return 0;
}