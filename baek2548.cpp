#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int input, arr[20000];

	cin >> input;
	for (int i = 0; i < input; i++)
		cin >> arr[i];
	sort(arr, arr + input, less<int>());
	cout << arr[(input - 1) / 2];

	return 0;
}