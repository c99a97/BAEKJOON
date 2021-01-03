#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int arr[10], cnt = 1;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}
	sort(arr, arr+10);

	for (int i = 0; i < 9; i++) {
		if (arr[i] != arr[i + 1])
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}