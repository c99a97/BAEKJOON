#include <iostream>

using namespace std;

int main(void) {
	string str;
	int alpha[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int sum = 0;

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		sum += alpha[str[i] - 65];
	}
	printf("%d\n", sum); 

	return 0;
}