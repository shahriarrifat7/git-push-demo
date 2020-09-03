#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<vector>
#include<algorithm>

typedef long long ll;
typedef unsigned long long ull;
typedef double D;
typedef long double LD;
#define pb push_back;
int op[100001],q[100001];
int ara[100001];
using namespace std;

int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&op[i]);
    }
    for(i=0; i<n; i++){
        scanf("%d",&q[i]);
    }
    printf("%d\n",op[0]);
    ara[0]=op[0];
    int k=1;
    for(i=1; i<n; i++){
        x=q[i]-1;
        ara[k]=op[i];
        k++;
        if(ara[x]<=op[i] && ara[x]>=ara[x-1]) {
            printf("%d\n",ara[x]);
        }
        else {
            sort(ara,ara+k);
            printf("%d\n",ara[x]);
        }
    }
    return 0;
}

