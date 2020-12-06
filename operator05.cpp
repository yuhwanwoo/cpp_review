#include <iostream>
using namespace std;

//Point 클래스 선언
class Point{
    private:
        int x;
        int y;
    public:
        Point(int a=0,int b=0){x=a; y=b;}
        Point operator++();
        Point operator++(int d);// 후위 증가 연산자의 오버로드입니다.
        void show();
};

Point Point::operator++(){
    x++;
    y++;
    return *this;
}

// 후위 증가 연산자의 오버로드
Point Point::operator++(int d){
    Point p=*this;
    x++;
    y++;
    return p;
}

void Point::show(){
    cout<<"x:"<<x<<"::"<<"y:"<<y;
}

int main(){
    Point p1(1,1);
    p1.show();
    ++p1;
    cout<<'\n';
    p1.show();
    cout<<'\n';
    p1++; // 후위 증가 연산자
    p1.show();
}