#include<iostream>
using namespace std;

int main(){
    int a;
    int* pA;

    a=5;
    pA=&a;

    cout<<"변수 a의 값은"<<a<<"입니다.\n";

    *pA=50;

    cout<<"pA에 50을 대입했습니다.\n";
    cout<<"변수 a의 값은"<<a<<"입니다.\n";

    return 0;
}