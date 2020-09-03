#include <bits/stdc++.h>

using namespace std;

vector < int > edges[100];
bool vis[100];

void dfs(int node) {
    if(vis[node]) return ;

    vis[node] = 1;

    for(int i = 0; i < edges[node].size(); ++i) {
        int v = edges[node][i];
        cout << node << "-->" << v << endl;
        dfs(v);
    }
}
int main()
{
    int n,a,b;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
   // memset(vis,0,sizeof(vis));
    dfs(1);
}

/*

7
6 4
4 5
5 1
1 2
2 5
2 3
3 4

*/
