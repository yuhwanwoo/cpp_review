# include<bits/stdc++.h>
using namespace std;


int main(){
    for(int tmp=0;tmp<64;tmp++){
        int brute = tmp;
        for(int i=0;i<3;i++){
            cout<<brute%4;
            brute/=4;
        }
        cout<<'\n';
    }
}
