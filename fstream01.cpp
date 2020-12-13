#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ofstream fout("test0.txt");
    if(!fout){
        cout<<"파일을 열 수 없습니다.\n";
        return 1;
    }else
        cout<<"파일을 열었습니다.\n";
    
    fout.close();
    cout<<"파일을 닫았습니다.\n";

    return 0;
}