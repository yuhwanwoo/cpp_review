#include <iostream>
using namespace std;

int main(){
    char ch;

    cout<<"영문자를 입력하십시오.\n";

    while(cin.get(ch)){
        cout.put(ch);
    }

    return 0;
}