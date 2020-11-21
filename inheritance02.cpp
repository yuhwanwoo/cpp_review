#include <iostream>
using namespace std;

// Car 클래스 선언
class Car{
    private:
        int num;
        double gas;
    public:
        Car();
        Car(int n,double g);
        void setCar(int n,double g);
        void show();
};

//RacingCar 클래스 선언
class RacingCar:public Car{
    private:
        int course;
    public:
    RacingCar();
    RacingCar(int n,double g,int c);
    void setCourse(int c);
};

//Car 클래스 멤버 함수의 정의
Car::Car(){
    num=0;
    gas=0.0;
    cout<<"자동차가 만들어졌습니다.\n";
}
Car::Car(int n,double g){
    num=n;
    gas=g;
    cout<<"차량 번호가 "<<num<<"이고, 연료량이 "<<gas<<"인 자동차가 만들어졌습니다.\n";
}
void Car::setCar(int n,double g){
    num=n;
    gas=g;
    cout<<"차량 번호를"<<num<<"으로, 연료량을 "<<gas<<"으로 바꾸었습니다.\n";
}
void Car::show(){
    cout<<"차량 번호는 "<<num<<"입니다.\n";
    cout<<"연료량은 "<<gas<<"입니다.\n";
}

//RacingCar 클래스 멤버 함수의 정의
RacingCar::RacingCar(){
    course=0;
    cout<<"레이싱 카가 만들어졌습니다.\n";
}
RacingCar::RacingCar(int n,double g,int c):Car(n,g){
    course=c;
    cout<<"코스 번호가"<<course<<"인 레이싱 카가 만들어 졌습니다.\n";
}
void RacingCar::setCourse(int c){
    course=c;
    cout<<"코스 번호를"<<course<<"로 정했습니다\n";
}

int main(){
    RacingCar rccar1(1234,20.5,5);

    return 0;
}