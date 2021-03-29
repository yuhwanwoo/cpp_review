#include <bits/stdc++.h>
using namespace std;

int func1(long long a,long long b, long long m){
    long long val=1;
    while(b--) val=val*a%m;
    return val;
}

int main(){
    cout<<func1(6,100,5);
}