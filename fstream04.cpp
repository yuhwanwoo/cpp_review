#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream fin("test1.txt");
    if(!fin){
        cout<<"파일을 열 수 없습니다.\n";
        return 1;
    }

    char str1[16];
    char str2[16];
    fin>>str1>>str2;
    cout<<"파일에 기록된 2개의 문자열은 \n";
    cout<<str1<<" 입니다.\n";
    cout<<str2<<" 입니다.\n";

    fin.close();

    return 0;
}