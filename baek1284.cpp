#include <iostream>

int main(void){
    int input, result;

    while(scanf("%d", &input)){
        if(input==0)
            break;

        result = 1;
        while(input!=0){
            result += 1;
            if(input%10 == 0)
                result += 4;
            else if(input%10 == 1)
                result += 2;
            else
                result += 3;
            input /= 10;
        }
        printf("%d\n", result);
    }
    return 0;
}