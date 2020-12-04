#include <bits/stdc++.h>
using namespace std;

// 전역에 선언하면 자동으로 0으로 채워진대
int freq[26];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    for(auto c:s)
        freq[c-'a']++;
    for(int i=0;i<26;i++)
        cout<<freq[i]<<' ';
}