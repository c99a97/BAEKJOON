#include <iostream>

using namespace std;

int main(void) {
	int A, B;

	scanf("%d %d", &A, &B);
	if (A > B)
		cout << ">" << endl;
	else if (A < B)
		cout << "<" << endl;
	else
		cout << "==" << endl;

	return 0;
}