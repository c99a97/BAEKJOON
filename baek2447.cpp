#include <iostream>

using namespace std;

void PrintStar(int i, int j, int n){
    if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
        printf(" ");
    else if (n / 3 == 0)
        printf("*");
    else
        PrintStar(i, j, n / 3);
}

int main() {
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            PrintStar(i, j, n);
        printf("\n");
    }
}