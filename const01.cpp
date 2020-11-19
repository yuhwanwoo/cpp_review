#include <iostream>
using namespace std;

//Car 클래스 선언
class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        void show();
};

// Car 클래스 멤버 함수의 정의
Car::Car(){
    num=0;
    gas=0.0;
    cout<<"자동차가 만들어졌습니다.\n";
}

void Car::show(){
    cout<<"차량 번호는"<<num<<"입니다.\n";
    cout<<"연료량은"<<gas<<"입니다.\n";
}

int main(){
    Car car1;

    car1.show();

    return 0;
}