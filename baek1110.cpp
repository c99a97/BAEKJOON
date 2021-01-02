#include <iostream>

using namespace std;

int main(void) {
	int N, tmp, count = 0;
	
	scanf("%d", &N);
	tmp = N;
	do {
		count++;
		tmp = ((tmp % 10) * 10)+((tmp / 10 + tmp % 10)%10);
	}while (N != tmp);
	printf("%d\n", count);

	return 0;
}