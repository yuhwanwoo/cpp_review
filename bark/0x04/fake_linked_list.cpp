#include <bits/stdc++.h>
using namespace std;

const int MX=1000005;
int dat[MX],pre[MX],nxt[MX];
int unused=1;

void traverse(){
    int cur=nxt[0];
    while(cur !=-1){
        cout<<dat[cur]<<' ';
        cur=nxt[cur];
    }
}


// 1. 새로운 원소를 생성
// 2. 새 원소의 pre 값에 삽입할 위치의 주소를 대입
// 3. 새 원소의 nxt 값에 삽입할 위치의 nxt 값을 대입
// 4. 삽입할 위치의 nxt 값과 삽입할 위치의 다음 원소의 pre 값을 새 원소로 변경
// 5. unused 1증가
void insert(int addr,int num){
    dat[unused]=num;
    pre[unused]=addr;
    nxt[unused]=nxt[addr];
    if(nxt[addr]!=-1) pre[nxt[addr]]==unused;
    nxt[addr]=unused;
    unused++;
}

void erase(int addr){
    nxt[pre[addr]]=nxt[addr];
    if(nxt[addr]!=-1) pre[nxt[addr]]=pre[addr];
}

void insert_test(){

}

void erase_test(){

}

int main(){
    fill(pre,pre+MX,-1);
    fill(nxt,nxt+MX,-1);
    
}