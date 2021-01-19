#include <iostream>

using namespace std;

void PrintReverse(string str) {
	int len = str.length();
	for (int i = 0; i < len; i++) {
		printf("%c", str[len - i - 1]);
	}
}

int main(void) {
	string A, B;

	cin >> A;
	cin >> B;

	if (A.length() > B.length())
		PrintReverse(A);
	else if (B.length() > A.length())
		PrintReverse(B);
	else {
		int len = A.length();
		for (int i = 0; i < len; i++) {
			if (A[len - i - 1] == B[len - i - 1])
				continue;
			else if (A[len - i - 1] > B[len - i - 1]) {
				PrintReverse(A);
				break;
			}
			else {
				PrintReverse(B);
				break;
			}
		}
	}

	return 0;
}