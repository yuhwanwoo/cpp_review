//strlen등이 사라짐

#include <iostream>
#include <string>
using namespace std;

//Car 클래스의 선언
class Car{
    private:
        int num;
        double gas;
        char* pName;
    public:
        Car::Car(char* pN, int n,double g);
        ~Car();
        void show();
};

