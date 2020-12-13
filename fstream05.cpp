#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ifstream fin("test3.txt");
    if(!fin){
        cout<<"파일을 열 수 없습니다.\n";
        return 1;
    }

    const int num=8;
    int test[num];
    for(int i=0;i<num;i++){
        fin>>test[i];
    }
    int max=test[0];
    int min=test[0];
    for(int j=0;j<num;j++){
        if(max<test[j])
            max=test[j];
        if(min>test[j])
            min=test[j];
        cout<<"No."<<j+1<<setw(5)<<test[j]<<'\n';
    }

    cout<<"가장 높은 점수는 "<<max<<"입니다.\n";
    cout<<"가장 낮은 점수는 "<<min<<"입니다.\n";

    fin.close();

    return 0;
}