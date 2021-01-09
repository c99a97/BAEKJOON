#include <iostream>

using namespace std;

#define MAX 20*100000+1

int input, arr[20];
bool check[MAX] = { false };

void go(int index, int value) {
	check[value] = true;
	if (index < input) {
		go(index + 1, value + arr[index]);
		go(index + 1, value);
	}
}

int main(void) {
	scanf("%d", &input);
	for (int i = 0; i < input; i++)
		scanf("%d", &arr[i]);

	go(0, 0);
	for (int i = 0; i < MAX; i++) {
		if (check[i] == false) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}