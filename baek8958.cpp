#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	int N;
	char str[81];

	scanf("%d", &N);
	while (N--) {
		int sum = 0, cnt = 0;
		scanf("%s", str);
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == 'O') {
				sum += ++cnt;
			}
			else {
				cnt = 0;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}