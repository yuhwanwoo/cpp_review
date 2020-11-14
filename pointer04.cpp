#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;
    int* pA;

    pA=&a;

    cout<<"변수 a의 값은"<<a<<"입니다.\n";
    cout<<"포인터 pA의 값은"<<pA<<"입니다.\n";
    cout<<"pA의 값은"<<*pA<<"입니다.\n";

    pA=&b;

    cout<<"변수 b의 값은"<<b<<"입니다.\n";
    cout<<"포인터 pA의 값이"<<pA<<"로 바뀌었습니다.\n";
    cout<<"pA의 값은"<<*pA<<"입니다.\n";

    return 0;
}