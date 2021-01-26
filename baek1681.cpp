#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int N;
	int n = 0;
	char L;

	scanf("%d %c", &N, &L);
	for (int i = 0; i < N; i++) {
		while (to_string(++n).find(L) != string::npos);
	}
	printf("%d\n", n);
	
	return 0;
}