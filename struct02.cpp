#include <iostream>
using namespace std;

// 구조체형 Car의 선언
struct Car{
    int num;
    double gas;
};

int main(){
    Car car1={1234,25.5};
    Car car2={4567,52.2};

    cout<<"car1의 차량 번호는 "<<car1.num<<"연료의 양은 "<<car1.gas<<"입니다.\n";
    cout<<"car2의 차량 번호는 "<<car2.num<<"연료의 양은 "<<car2.gas<<"입니다.\n";

    car2=car1;

    cout<<"car1을 car2에 대입했습니다.\n";
    cout<<"car2의 차량 번호는 "<<car2.num<<"연료의 양은 "<<car2.gas<<"입니다.\n";
}