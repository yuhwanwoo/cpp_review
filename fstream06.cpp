#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    if(argc !=2){
        cout<<"인수의 개수가 틀립니다.\n";
        return 1;
    }
    ifstream fin(argv[1]);
    if(!fin){
        cout<<"파일을 열 수 없습니다.\n";
        return 1;
    }

    char ch;
    fin.get(ch);

    while(!fin.eof()){
        cout.put(ch);
        fin.get(ch);
    }

    fin.close();

    return 0;
}