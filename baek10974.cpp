#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> v;
bool isVisited[8] = {false, };

void dfs(void){
    if(v.size() == N){
        for(int i=0; i<v.size(); i++){
            printf("%d ",v[i]);
        }
        printf("\n");
    }
    else{
        for(int i=0; i<N; i++){
            if(!isVisited[i]){
                isVisited[i] = true;
                v.push_back(i+1);
                dfs();
                isVisited[i] = false;
                v.pop_back();
            }
        }
    }
} 

int main(void){
    scanf("%d", &N);
    dfs();

    return 0;
}