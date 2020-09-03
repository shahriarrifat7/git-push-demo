#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int n;

int lower(int ara[], int key){
int beg=0,en=n-1,mid;
while(beg<=en){
    mid=(beg+en)/2;
    if(key==ara[mid]) en=mid-1;
    else if(key>ara[mid]) beg=mid+1;
    else if(key<ara[mid]) en=mid-1;
}
return beg;
}
int higher(int ara[],int key){
int beg=0,en=n-1,mid;
while(beg<=en){
    mid=(beg+en)/2;
    if(key==ara[mid]) beg=mid+1;
    else if(key>ara[mid]) beg=mid+1;
    else if(key<ara[mid]) en=mid-1;
}
return beg;
}
int main()
{
    int i,j,ara[100],m,x;
    while(scanf("%d", &n)==1){
        for(i=0; i<n; i++){
            scanf("%d", &ara[i]);
        }
        scanf("%d", &m);
        for(i=0; i<m; i++){
            scanf("%d", &x);
            printf("%d %d\n",lower(ara,x),higher(ara,x));
        }
    }
    return 0;
}
