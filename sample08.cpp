#include <iostream>
using namespace std;

inline int max(int x,int y){if(x>y) return x; else return y;}

int main(){
    int num1,num2,ans;

    cout<<"첫 번째 정수를 입력하십시오.\n";
    cin>>num1;
    
    cout<<"두 번째 정수를 입력하십시오.\n";
    cin>>num2;

    ans=max(num1,num2);

    cout<<"최대값은"<<ans<<"입니다\n";

    return 0;
}