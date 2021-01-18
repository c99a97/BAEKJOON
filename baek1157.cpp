#include <iostream>

using namespace std;

int main(void) {
	string str;
	int alpha[26] = { 0 };

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 97)
			alpha[str[i] - 65]++;
		else
			alpha[str[i] - 97]++;
	}

	int w, max = 0;
	bool isSame = false;
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			w = i;
			isSame = false;
		}
		else if (max == alpha[i])
			isSame = true;
	}

	if (isSame)
		printf("?\n");
	else
		printf("%c\n", w + 65);

	return 0;
}