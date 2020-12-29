#include <iostream>

using namespace std;

int calcX(int x) {
	int sum = 0;

	if (x < 100) {
		return x;
	}else {
		for (int i = 100; i <= x; i++) {
			int h = i / 100;
			int t = (i % 100) / 10;
			int o = i % 10;
			if (h - t == t - o)
				sum++;
		}
	}
	return (sum + 99);
}
int main(void) {
	int x;

	scanf("%d", &x);
	cout << calcX(x) << endl;

	return 0;
}