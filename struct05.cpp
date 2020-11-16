#include <iostream>
using namespace std;

// 구조체형 Car의 선언
struct Car{
    int num;
    double gas;
};

//show 함수 선언
void show(Car& c);

int main(){
    Car car1={0,0.0};

    cout<<"차량번호 입력\n";
    cin>>car1.num;

    cout<<"연료량 입력\n";
    cin>>car1.gas;

    show(car1);

    return 0;
}

void show(Car& c){
    cout<<"차량 번호는"<<c.num<<"연료의 양은 "<<c.gas<<"입니다.\n";
}