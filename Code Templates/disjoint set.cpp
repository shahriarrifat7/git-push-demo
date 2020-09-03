#include<bits/stdc++.h>
#define M 100
// rp = representative
using namespace std;

int parent[M];

void makeset(int n){
    parent[n]=n;
}

int Find(int rp){
    if(parent[rp]==rp) return rp;
    return parent[rp]=Find(parent[rp]);
}

void Union(int a, int b){
    int u=Find(a);
    int v=Find(b);
    if(u==v) {
        printf("They are already Friends.\n");
    }
    else {
        parent[u]=v;
    }
}
int main()
{
    int t,i,j;
    char s[5],ch[2];
    cin>>t;
    while(t--){

        scanf("%s",ch);
        int x=ch[0]-'A';
        for(i=0; i<=x; i++){
            makeset(i);
        }
        getchar();
        while(gets(s)){
            if(s[0]=='\0' || s[0]=='\n') {
                printf("End of friendship Circle.\n");
                break;
            }
            int a=s[0]-'A';
            int b=s[1]-'A';
            Union(a,b);
        }

        if(t) printf("\n");
    }
    return 0;
}
