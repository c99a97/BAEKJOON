#include <iostream>
using namespace std;

int main(void) {
	int N;
	int cnt = 0;
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		string str;
		bool alphabet[26] = { false };

		cin >> str;
		char c;
		for (int j = 0; j < str.length(); j++) {
			if (j == 0) {
				c = str[j];
				alphabet[c - 'a'] = true;
			}
			else if (c != str[j]) {
				c = str[j];
				if (alphabet[c - 'a']) {
					cnt--;
					break;
				}
				else
					alphabet[c - 'a'] = true;
			}
		}
		cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}