#include <bits/stdc++.h>
using namespace std;

string str;


int main() 
{
    vector<pair<int,int>> vec;
    cin>>str;
    cin.clear();
    int x1=str[0]-'0';
    int y1=str[2]-'0';
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str_leng;
        cin>>str_leng;
        vec.push_back({str_leng[0]-'0',str_leng[2]-'0'});
        cin.clear();
    }

    vector<pair<int,int>> index;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        int a=vec.back().first;
        int b=vec.back().second;
        vec.pop_back();
        cout<<"a::"<<a<<"::b::"<<b<<"\n";
        index.push_back({(x1-a)*(x1-a)+(y1-b)*(y1-b),i});
    }
    sort(index.begin(),index.end());

    for(int i=0;i<index.size();i++){
        cout<<vec[index[i].second].first<<","<<vec[index[i].second].second<<"\n";
    }
}