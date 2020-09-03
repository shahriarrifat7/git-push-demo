#include<bits/stdc++.h>

using namespace std;

#define M 100
#define pb push_back
#define uu first
#define vv second

vector<int>edge[M],cost[M];
const int INF = 123456789;

int bfs(int src, int des){
    int d[M];
    for(int i=0; i<M; ++i) d[i]=INF;

    queue< int >q;
    q.push(src);
    d[src]=0;

    while(!q.empty()) {
        int u = q.front(); q.pop();
        int ucost = d[u];
        for(int i=0; i<edge[u].size(); ++i){
            int v = edge[u][i];
            int vcost = cost[u][i] + ucost;

            if(d[v]>vcost) {
                d[v] = vcost;
                q.push(v);
            }
        }
    }
    return d[des];
}
int main()
{
    int ed,nd,src,des,n,m,c;
    cin>>nd>>ed;
    for(int i=0; i<ed; ++i){
        cin>>n>>m>>c;
        edge[n].pb(m);

        cost[n].pb(c);
    }
    cin>>src>>des;
    cout<< bfs(src, des) <<endl;
}
