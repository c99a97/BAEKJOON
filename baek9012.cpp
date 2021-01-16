#include <iostream>
#include <vector>
using namespace std;

string VPS(string str) {
	vector<char> arr;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			arr.push_back('(');
		else if (!arr.empty())
			arr.pop_back();
		else
			return "NO";
	}
	if (!arr.empty())
		return "NO";
	else
		return "YES";
}

int main(void) {
	int T;
	string str;
	
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		cin >> str;
		cout << VPS(str) << endl;
	}

	return 0;
}