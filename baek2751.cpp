#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int N;
	vector<int> arr;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d", &tmp);
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end(), less<int>());
	for (int i = 0; i < arr.size(); i++)
		printf("%d\n", arr[i]);

	return 0;
}