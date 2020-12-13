#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for(int i=0;i<=10;i++){
        // setw(3) -> 출력폭을 3으로 지정합니다.
        cout<<setw(3)<<i;
    }
    cout<<'\n';

    return 0;
}