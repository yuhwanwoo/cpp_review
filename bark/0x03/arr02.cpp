#include <cstring>
#include <algorithm>
#include <iostream>

int main(){
    int a[21];
    int b[21][21];

    // 1. memset
    // cstring 헤더에 있음
    // 짧지만 실수할 여지가 많다(비추천)
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);

    // 2. for
    for(int i=0;i<21;i++)
        a[i]=0;
    for(int i=0;i<21;i++)
        for(int j=0;j<21;j++)
            b[i][j]=0;
    
    // 3. fill
    // algorithm 헤더에 있음 (근데 아닌거같음 헤더 지워도 나오네)
    std::fill(a,a+21,10);
    std::cout<<a[1];
    
}