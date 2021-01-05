#include <iostream>

#define MAX 1000

using namespace std;

int main(void) {
	int N, arr[MAX];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N-1; i++) {
		int min = arr[i], min_position = i;
		for (int j = i + 1; j < N; j++) {
			if (arr[min_position] > arr[j]) {
				min = arr[j];
				min_position = j;
			}
		}
		if (i != min_position) {
			int tmp = arr[i];
			arr[i] = arr[min_position];
			arr[min_position] = tmp;
		}
	}

	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);

	return 0;
}