#include<bits/stdc++.h>
using namespace std;

#define M 100001

int ara[M];
int tree[M*4];

void init(int node, int b, int e)
{
    if(b==e) {
        tree[node] = ara[b];
        return;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b + e) / 2 ;
    init(left, b, mid);
    init(right, mid+1, e);

    tree[node] = tree[left] + tree[right];
}

int query(int node, int b, int e, int i, int j)
{
    if(e<i || b>j) return 0;

    if(b>=i && e<=j) return tree[node];

    int left = node*2, right = node*2 + 1;
    int mid = (b + e) / 2;
    int P1 = query(left, b, mid, i, j);
    int P2 = query(right, mid+1, e, i, j);

    return P1 + P2 ;
}

void update(int node, int b, int e, int i, int newvalue)
{
    if(e<i || b>i) return;
    if(b==e) {
        tree[node] = newvalue; return;
    }
    int left = node*2, right = node*2 + 1 ;
    int mid =  (b + e) / 2;
    update(left, b, mid, i, newvalue);
    update(right, mid+1, e, i, newvalue);

    tree[node] = tree[left] + tree[right];
}

int main()
{
    int i, j, n;
    while(scanf("%d", &n)==1) {
        for(i=1; i<=n; ++i) scanf("%d", &ara[i]);
        init(1, 1, n);
        cout << query(1, 1, n, 2, 6) << '\n';
        update(1, 1, n, 2, 100);
        cout << query(1, 1, n, 2, 2) << '\n';
    }
}
