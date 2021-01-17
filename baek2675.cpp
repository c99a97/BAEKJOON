#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int T, R;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		string str;
		scanf("%d", &R);
		cin >> str;

		for (int j = 0; j < str.length(); j++)
			for (int k = 0; k < R; k++)
				printf("%c", str[j]);
		printf("\n");
	}

	return 0;
}