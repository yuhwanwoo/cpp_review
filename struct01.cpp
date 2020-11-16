#include <iostream>
using namespace std;

//구조체형 Car의 선언
struct Car{
    int num;
    double gas;
};

int main(){
    Car car1;
    
    cout<<"차량 번호를 입력하십시오\n";
    cin>>car1.num;

    cout<<"연료량을 입력하십시오.\n";
    cin>>car1.gas;

    cout<<"차량번호는 "<<car1.num<<": 연료량은 "<<car1.gas<<"입니다.\n";

    return 0;
}