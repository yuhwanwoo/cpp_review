#include <iostream>
using namespace std;

int main(){
    double pi=3.141592;
    int num;

    cout<<"원주율을 출력합니다.\n";
    cout<<"소숫점 몇 번째 자리까지 출력하시겠습니까? (1~7)\n";
    cin>>num;

    cout.precision(num);

    cout<<"원주율은 "<<pi<<"입니다.\n";

    return 0;
}