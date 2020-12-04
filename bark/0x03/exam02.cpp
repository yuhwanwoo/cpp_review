#include <bits/stdc++.h>
using namespace std;

int fun2(int arr[],int n);

int occur[101];
int main(){
    int arr[5]={1,23,53,77,60};
    int n=5;

    cout<<fun2(arr,n);

}

int fun2(int arr[],int n){
    for(int i=0;i<n;i++){
        if(occur[100-arr[i]]==1) // if(occur[100-arr[i]])로 적어도 됨
            return 1;
        occur[arr[i]]=1;
    }
    return 0;
}


