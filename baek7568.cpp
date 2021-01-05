#include <iostream>
#include <vector>

#define MAX 50

using namespace std;

int main(void) {
	vector<pair<int, int>> P;
	int N, rank[MAX] = { 0 };

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		P.push_back(make_pair(x, y));
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (P[i].first < P[j].first && P[i].second < P[j].second)
				rank[i]++;
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d ", rank[i]+1);
	printf("\n");

	return 0;
}