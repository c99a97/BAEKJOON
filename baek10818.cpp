#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int N;
	vector<int> arr;

	scanf("%d", &N);
	while (N--) {
		int tmp;
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end(), less<int>());
	printf("%d %d\n", *arr.begin(), *(arr.end() - 1));

	return 0;
}