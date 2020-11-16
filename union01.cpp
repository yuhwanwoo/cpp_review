#include <iostream>
using namespace std;

// 공용체형 Year의 선언
union Year{
    int ad;
    int dangi;
};

int main(){
    Year myyear;

    cout<<"서기를 입력하십시오.\n";
    cin>>myyear.ad;

    cout<<"서기:"<<myyear.ad<<"년입니다.\n";
    cout<<"단기 또한:"<<myyear.dangi<<"년입니다.\n";

    cout<<"단기 입력하세요\n";
    cin>>myyear.dangi;

    cout<<"단기"<<myyear.dangi<<"년입니다.\n";
    cout<<"단기 또한:"<<myyear.dangi<<"년입니다.\n";

    return 0;
}