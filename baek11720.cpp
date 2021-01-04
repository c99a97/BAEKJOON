#include <iostream>

using namespace std;

int main(void) {
	int N, sum = 0;
	char c;

	scanf("%d\n", &N);
	while (N--) {
		scanf("%c", &c);
		sum += c - '0';
	}
	printf("%d\n", sum);
	return 0;
}