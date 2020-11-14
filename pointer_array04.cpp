#include <iostream>
using namespace std;

// 결과값
// 5명의 시험 점수를 입력하십시오.
// 80
// 60
// 55
// 22
// 75
// 0x61feec
// 0x61fed0
// 80
// test주소는::::0x61feec
// 5명의 평균 점수는58.4점입니다.


//avg 함수의 선언
double avg(int* pT);

int main(){
    int test[5];

    cout<<"5명의 시험 점수를 입력하십시오.\n";
    for(int i=0;i<5;i++){
        cin>>test[i];
    }
    
    double ans=avg(test);
    cout<<"test주소는::::"<<test<<"\n";
    cout<<"5명의 평균 점수는"<<ans<<"점입니다.\n";

    return 0;
}

//avg 함수의 정의
double avg(int* pT){
    double sum=0;
    cout<<pT<<"\n";
    cout<<&pT<<"\n";
    cout<<*pT<<"\n";
    for(int i=0;i<5;i++){
        sum+=*(pT+i);
    }

    return sum/5;
}