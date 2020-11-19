#include <iostream>
using namespace std;

// Car 클래스의 선언
class Car{
    private:
        int num;
        double gas;
    public:
        void show();
        void setNumGas(int n,double g);
};

void Car::show(){
    cout<<"차량 번호는"<<num<<"입니다.\n";
    cout<<"연료량은"<<gas<<"입니다.\n";
}
void Car::setNumGas(int n,double g){
    if(g>0 && g<1000){
        num=n;
        gas=g;
        cout<<"차량 번호를 "<<num<<"으로 연료량을"<<gas<<"으로 바꾸었습니다.\n";
    }else{
        cout<<g<<"는 올바른 연료량이 아닙니다.\n";
        cout<<"연료량을 바꿀 수 없습니다.\n";
    }
}

int main(){
    Car car1;

    car1.setNumGas(1234,20.5);
    car1.show();

    cout<<"잘못된 연료량(-10.0)을 저장해 보겠습니다\n";
    car1.setNumGas(1234,-10.0);
    car1.show();

    return 0;
}