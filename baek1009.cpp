#include <iostream>

using namespace std;

int calcN(int a, int b) {
	a %= 10;
	int now = a;
	for (int i = 1; i < b; i++) {
		now *= a;
		now %= 10;
	}
	if (now == 0)
		now = 10;
	return now;
}

int main(void) {
	int a, b, n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		cout << calcN(a, b) << endl;
	}

	return 0;
}