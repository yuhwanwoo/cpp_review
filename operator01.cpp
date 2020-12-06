#include <iostream>
using namespace std;

//Point 클래스 선언
class Point{
    private:
        int x;
        int y;
    public:
        Point(int a=0,int b=0){x=a; y=b;}
        void show(){cout<<"x : "<<x<<"y : "<<y<<'\n';}
        void setX(int a){x=a;}
        void setY(int b){y=b;}
};

int main(){
    Point p1(1,3);
    Point p2(5,2);
}