#include <iostream>
using namespace std;

int main(void) {
	string str;
	string dic[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	cin >> str;
	for (int i = 0; i < 8; i++) {
		while (1) {
			int idx = str.find(dic[i]);
			if (idx == string::npos)
				break;
			str.replace(idx, dic[i].length(), "#");
		}
	}
	printf("%d\n", str.length());

	return 0;
}