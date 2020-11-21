#include <iostream>
using namespace std;

//Car 클래스 선언
class Car{
    protected:
        int num;
        double gas;
    public:
        Car();
        void setCar(int n,double g);
        void show();
};

//RacingCar 클래스 선언
class RacingCar:public Car{
    private:
        int course;
    public:
        RacingCar();
        void setCourse(int c);
        void show();
};

//Car 클래스 멤버 함수의 정의
Car::Car(){
    num=0;
    gas=0.0;
    cout<<"자동차가 만들어졌습니다.\n";
}
void Car::setCar(int n,double g){
    num=n;
    gas=g;
    cout<<"차량 번호를 "<<num<<"으로, 연료량을 "<<gas<<"으로 바꾸었습니다.\n";
}
void Car::show(){
    cout<<"차량 번호는 "<<num<<"입니다.\n";
    cout<<"연료량은"<<gas<<"입니다.\n";
}

//RacingCar클래스 멤버 함수의 정의
RacingCar::RacingCar(){
    course=0;
    cout<<"레이싱 카가 만들어졌습니다.\n";
}
void RacingCar::setCourse(int c){
    course=c;
    cout<<"코스 번호를 "<<course<<"로 정했습니다.\n";
}
void RacingCar::show(){
    cout<<"레이싱 카의 차량 번호는 "<<num<<"입니다.\n";
    cout<<"연료량은 "<<gas<<"입니다.\n";
    cout<<"코스 번호는"<<course<<"입니다.\n";
}

int main(){
    RacingCar rccar1;
    rccar1.setCar(1234,20.5);
    rccar1.setCourse(5);

    rccar1.show();

    return 0;
}