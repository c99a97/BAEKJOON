#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	string A, B;
	vector<char> sum;

	cin >> A >> B;
	int ALength = A.length();
	int BLength = B.length();
	int carry = 0;

	while (ALength > 0 || BLength > 0) {
		int nowA = (ALength > 0) ? A[--ALength] - '0' : 0;
		int nowB = (BLength > 0) ? B[--BLength] - '0' : 0;
		int now = nowA + nowB + carry;
		carry = 0;

		if (now >= 10) {
			sum.push_back(now - 10 + '0');
			carry = 1;
		}
		else
			sum.push_back(now + '0');
	}
	if (carry == 1)
		sum.push_back('1');

	while (sum.size()) {
		printf("%c", sum.back());
		sum.pop_back();
	}

	return 0;
}