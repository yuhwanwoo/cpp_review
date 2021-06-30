#include<bits/stdc++.h>
using namespace std;

#define N 1001
vector<pair<int,int>> adj[N];
int pa[N], di[N];
bool inq[N];

int main(){
    int n, m;
    scanf("%d%d",&n,&m);
    vector<pair<int,int>> adj[n+1];
    while( m-- ){
        int u, v, d;
        scanf("%d%d%d",&u,&v,&d);
        adj[u].push_back({v,d});
    }
    queue<int> qu;
    qu.push(1);
    while( !qu.empty() ){
        int u = qu.front();
        inq[u] = 0;
        qu.pop();
        for( auto i : adj[u] ){
            int v = i.first, d = i.second;
            if( di[v] < di[u]+d ){
                di[v] = di[u]+d;
                pa[v] = u;
                if( !inq[v] && v!=1 ) inq[v] = 1, qu.push(v);
            }
        }
    }
    printf("%d\n",di[1]);
    m = 0;
    cout<<di[2]<<"\n";
    for( int v = 1; ; ){
        di[m++] = v;
        v = pa[v];
        if( v==1 ) break;
    }
    di[m++] = 1;
    for( int i=m-1; i>=0; i-- ) printf("%d ",di[i]);

    return 0;
}