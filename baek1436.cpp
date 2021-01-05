#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int N, cnt = 0, title = 665;
	scanf("%d", &N);

	while (++title) {
		string s = to_string(title);
		if (s.find("666") != -1)
			cnt++;
		if (cnt == N) {
			cout << title << endl;
			break;
		}
	}

	return 0;
}