#include <iostream>

using namespace std;

int main(void) {
	int arr[26];
	string str;
	fill_n(arr, 26, -1);

	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (arr[str[i] - 'a'] == -1)
			arr[str[i] - 'a'] = i;
	}
	
	for (int i = 0; i < 26; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}