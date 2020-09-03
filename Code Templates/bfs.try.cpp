#include<bits/stdc++.h>

using namespace std;
vector<int>edges[10000];
int level[10000];

void bfs(int src, int n)
{
    int i,j;
    queue<int>q;
    q.push(src);
    bool visited[10000]={0};
    int papa[10000];
    level[src]=0;
    while(!q.empty()){
        int u=q.front();
        for(i=0; i<edges[u].size(); i++){
           int  v=edges[u][i];
            if(!visited[v]){
                level[v]=level[u]+1;
                visited[v]=1;
                papa[v]=u;
                q.push(v);
            }

        }
        q.pop();
    }
    printf("Shortest path dis from %d to %d: %d\n",src,n,level[n]);
    printf("path>>>%d",n);
    int x=n;
    while(x!=src){
        printf(">>%d",papa[x]);
        x=papa[x];
    }
}
int main()
{
    int nd,eg,n,m,i,j,f,l;

    scanf("%d %d",&nd,&eg);
    for(i=1; i<=eg; i++){
        scanf("%d %d",&n,&m);
        edges[n].push_back(m);
    }
    scanf("%d %d",&f,&l);
    bfs(f,l);

}
