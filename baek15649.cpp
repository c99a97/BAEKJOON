#include <iostream>
#include <vector>

#define MAX 8+1

using namespace std;

int M, N;
bool visit[MAX] = {0,};
vector<int> V;

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++)
			printf("%d ", V[i]);
		printf("\n");
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (visit[i] == true)
			continue;
		visit[i] = true;
		V.push_back(i);
		dfs(cnt + 1);
		visit[i] = false;
		V.pop_back();
	}
}

int main(void) {
	scanf("%d %d", &N, &M);
	dfs(0);
	return 0;
}