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
        friend Point operator+(int a,Point p); // 여기 추가
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

Point operator+(int a,Point p){  // int a: + 연산자 왼쪽 변수를 의미,  Point P: + 연산자 오른쪽 변수를 의미
    Point tmp;
    tmp.x=a+p.x;
    tmp.y=a+p.y;
    return tmp;
}

//Point 클래스의 이용
int main(){
    Point p1(1,2);
    Point p2(3,6);
    p1=p1+p2;

    p1.show();
    
}