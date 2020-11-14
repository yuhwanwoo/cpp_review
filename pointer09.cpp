#include <iostream>
using namespace std;

// swap 함수의 선언
void swap(int* x,int* y);

int main(){
    int num1=5;
    int num2=10;

    cout<<"변수 num1의 값은"<<num1<<"입니다.\n";
    cout<<"변수 num2의 값은"<<num2<<"입니다.\n";
    cout<<"변수 num1과 num2의 값을 교환합니다.\n";

    swap(num1,num2);

    cout<<"변수 num1의 값은"<<num1<<"입니다.\n";
    cout<<"변수 num2의 값은"<<num2<<"입니다.\n";


    return 0;
}

//swap 함수의 정의
void swap(int& x,int& y){
    int tmp;

    tmp=x;
    x=y;
    y=tmp;


}