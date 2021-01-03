#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int N, max;
	vector<int> score;
	double avg = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int tmp;
		scanf("%d", &tmp);
		score.push_back(tmp);
	}
	sort(score.begin(), score.end(), greater<int>());
	max = score[0];
	
	for (vector<int>::iterator iter = score.begin(); iter < score.end(); iter++) {
		avg += (double)*iter / max * 100;
	}
	printf("%lf\n", avg / N);

	return 0;
}