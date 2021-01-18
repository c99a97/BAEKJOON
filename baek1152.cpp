#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str;
	int cntWord = 0;
	bool isSpace = true;

	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (isSpace && str[i] != ' ') {
			cntWord++;
			isSpace = false;
		}
		if (str[i] == ' ')
			isSpace = true;
	}
	printf("%d\n", cntWord);

	return 0;
}