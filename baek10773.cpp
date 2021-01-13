#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;

int main(void) {
	int K;
	vector<int> num;
	ull sum = 0;

	scanf("%d", &K);
	while (K--) {
		int tmp;
		scanf("%d", &tmp);

		if (tmp == 0)
			num.pop_back();
		else
			num.push_back(tmp);
	}

	for (int i = 0; i < num.size(); i++)
		sum += num[i];
	printf("%llu\n", sum);
	return 0;
}