// 백준 10808번
#include <bits/stdc++.h>
using namespace std;

int main(){
    int alpha[26];
    int index=0;
    string content;

    std::fill(alpha,alpha+26,0);

    cin>>content;
    
    for(int i=0;i<content.size();i++){
        index=char(content[i])-char('a');
        alpha[index]+=1;
    }

    for(int i=0;i<26;i++){
        cout<<alpha[i]<<" ";
    }
}