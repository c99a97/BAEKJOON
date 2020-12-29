#include <iostream>

using namespace std;

typedef unsigned long long ull;

int main(void) {
	int t, n, m;
	ull result;

	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &m);
		result = 1;
		for (int i = 1; i <= n; i++) {
			result = result * (m - i + 1) / i;
		}
		printf("%llu\n", result);
	}

	return 0;
}