#include <iostream>
using namespace std;

// 열거형 Week의 선언
enum Week{SUN,MON,TUE,WED,THU,FRI,SAT};

int main(){
    Week w;
    w=SUN;

    switch(w){
        case SUN:cout<<"일요일입니다.\n"; break;
        case MON:cout<<"월요일입니다.\n"; break;
        case TUE:cout<<"화요일입니다.\n"; break;
        case WED:cout<<"수요일입니다.\n"; break;
        case THU:cout<<"목요일입니다.\n"; break;
        case FRI:cout<<"금요일입니다.\n"; break;
        case SAT:cout<<"토요일입니다.\n"; break;
        default: cout<<"무슨 요일인지 알 수 없습니다.\n"; break;
    }

    return 0;
}