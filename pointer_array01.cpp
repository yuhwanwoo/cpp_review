#include <iostream>
using namespace std;

int main(){
    int test[5]={80,60,55,22,75};

    cout<<"test[0]의 값은"<<test[0]<<"입니다\n";
    cout<<"test[0]의 주소는"<<&test[0]<<"입니다\n";
    cout<<"test의 값은 "<<test<<"입니다\n";
    cout<<"즉 *test의 값은"<<*test<<"입니다.\n";

    return 0;
}