#include <iostream>
using namespace std;

int main(){
    int i;
    double d;
    char str[100];

    cout<<"정수를 입력하십시오.\n";
    cin>>i;
    cout<<"소수를 입력하십시오.\n";
    cin>>d;
    cout<<"문자열을 입력하십시오.\n";
    cin>>str;

    cout<<"입력한 정수 값은 "<<i<<"입니다.\n";
    cout<<"입력한 소수 값은 "<<d<<"입니다.\n";
    cout<<"입력한 문자열은 "<<str<<"입니다.\n";

    return 0;
}