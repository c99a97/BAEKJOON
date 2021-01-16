#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> board;
string whiteBoard[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string blackBoard[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

int WhiteBoardCount(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (whiteBoard[i][j] != board[i + x][j + y])
				cnt++;
		}
	}
	return cnt;
}
int BlackBoardCount(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (blackBoard[i][j] != board[i + x][j + y])
				cnt++;
		}
	}
	return cnt;
}

int main(void) {
	int N, M,
		minChange = 64;

	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		board.push_back(str);
	}

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int tmp = min(WhiteBoardCount(i, j), BlackBoardCount(i, j));
			if(minChange > tmp)
				minChange = tmp;
		}
	}
	printf("%d\n", minChange);
	return 0;
}