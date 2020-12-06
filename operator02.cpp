#include <iostream>
using namespace std;

// Point 클래스 선언
class Point{
    private:
        int x;
        int y;
    public:
        Point(int a=0,int b=0){x=a; y=b;}
        Point operator+(Point p);
        void show();
};

//Point 클래스 멤버 함수의 정의
Point Point::operator+(Point p){
    Point tmp;
    tmp.x=x+p.x;
    tmp.y=y+p.y;
    return tmp;
}

void Point::show(){
    cout<<"x:"<<x<<"::"<<"y:"<<y;
}

//Point 클래스의 이용
int main(){
    Point p1(1,2);
    Point p2(3,6);
    p1=p1+p2;

    p1.show();
    
}