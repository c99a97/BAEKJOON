#include <iostream>

using namespace std;

int Fibonacci(int num) {
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main(void) {
	int num;

	scanf("%d", &num);
	printf("%d\n", Fibonacci(num));
	return 0;
}