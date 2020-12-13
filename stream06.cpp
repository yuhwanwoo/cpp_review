#include <iostream>
using namespace std;

int main(){
    //왼쪽으로 정렬해서 출력
    cout.setf(ios::left,ios::adjustfield);
    for(int i=0;i<=5;i++){
        cout.width(5);
        cout.fill('-');
        cout<<i;
    }

    cout<<'\n';
    // 왼쪽 정렬 해제
    cout.unsetf(ios::left);
    // 오른쪽 정렬해서 출력
    cout.setf(ios::right,ios::adjustfield);
    for(int j=0;j<=5;j++){
        cout.width(5);
        cout.fill('-');
        cout<<j;
    }
    cout<<'\n';

    return 0;
}