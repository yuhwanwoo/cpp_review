#include <iostream>
using namespace std;

// Point 클래스 선언
class Point{
    private:
        int x;
        int y;
    public:
        Point(int a=0,int b=0){x=a; y=b;}
        void setX(int a){x=a;}
        void setY(int b){y=b;}
        void show(){cout<<"x: "<<x<<" y: "<<y<<'\n';}
        Point operator++();
        Point operator++(int d);
        friend Point operator+(Point p1, Point p2);
        friend Point operator+(Point p, int a);
        friend Point operator+(int a, Point p);
};

//Point 클래스 멤버 함수의 정의
// 전위 증가 연산자의 정의
Point Point::operator++(){
    x++;
    y++;
    return *this;
}
// 후위 증가 연산자의 정의
Point Point::operator++(int d){
    Point p=*this;
    x++;
    y++;
    return p;
}

//프렌드 함수의 정의
// p1+p2 연산을 수행하는 + 연산자의 정의
Point operator+(Point p1, Point p2){
    Point tmp;
    tmp.x=p1.x+p2.x;
    tmp.y=p1.y+p2.y;
    return tmp;
}
// p1+3 연산을 수행하는 + 연산자의 정의
Point operator+(Point p,int a){
    Point tmp;
    tmp.x=p.x+a;
    tmp.y=p.y+a;
    return tmp;
}
//3+p1 연산을 수행하는 + 연산자의 정의
Point operator+(int a,Point p){
    Point tmp;
    tmp.x=a+p.x;
    tmp.y=a+p.y;
    return tmp;
}

int main(){
    Point p1(1,2);
    Point p2(3,6);
    p1=p1+p2;
    p1++;
    p1=p1+3;
    p2=3+p2;

    p1.show();
    p2.show();

    return 0;
}