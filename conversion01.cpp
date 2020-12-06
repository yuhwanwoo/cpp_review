#include <iostream>
using namespace std;

class Number{
    private:
        int num;
    public:
        Number(){num=0;}
        Number(int n){num=n;} // int 값을 Number형 객체로 변환시키는 생성자
        operator int(){return num;}
        Number operator++();
        Number operator++(int d);
        Number operator--();
        Number operator--(int d);
};

Number Number::operator++(){
    num++;
    return *this;
}
Number Number::operator++(int d){
    Number n=*this;
    num++;
    return n;
}
Number Number::operator--(){
    num--;
    return *this;
}
Number Number::operator--(int d){
    Number n=*this;
    num--;
    return n;
}

int main(){
    Number n;
    int i=(int)n;

    // 캐스트 연산자 안써도 됨
    int b=n;

    int a=10;
    Number n(i);
}