#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define M 1000

const int INF = 123456789;
vector<int>cost[M],edge[M];
struct data{
    int city,dist;

    bool operator < (const data &p) const {
        return dist > p.dist;
    }
};

int dijkstra(int src, int des){
    int d[M];
    for(int i=0; i<M; ++i) d[i] = INF;
    data u, v;
    priority_queue<data>q;

    u.city = src;
    u.dist = 0;
    q.push(u);
    d[src] = 0;

    while(!q.empty()){
        u = q.top(); q.pop();
        for(int i=0; i<edge[u.city].size(); ++i){
            v.city = edge[u.city][i];
            v.dist = cost[u.city][i]+d[u.city];

            if(d[v.city]>v.dist) {
                d[v.city] = v.dist;
                q.push(v);
            }
        }
    }
    return d[des];
}

int main()
{
    int n,m,c,ed,nd,src,des;
    cin>>nd>>ed;
    for(int i=0; i<ed; ++i){
        cin >>n >> m >>c;
        edge[n].pb(m);
        cost[n].pb(c);
    }
    cin>>src>>des;
    cout<<dijkstra(src,des)<<endl;
}
