#include<stdio.h>
int main()
{
    int n,m,a,i;
    long long d,r;
    while(scanf("%d %d", &n, &m)==2){
        if(n==0 && m==0)break;
        if(m<=(n-m)){
            a=m;
        }
        else if((n-m)<m){
            a=n-m;
        }
            d=1;
            r=1;
            for(i=1; i<=a; i++){
                d = d*((n-a)+i);
                r = r*i;
                if(d%r==0){
                    d = d/r;
                    r = r/i;
                }
            }
            printf("%lld\n", d/r);
    }
    return 0;
}
