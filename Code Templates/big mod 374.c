#include<stdio.h>
long long m;
long long F(long long n,long long p)
{
    if(p==0) return 1;
    if(p%2==0){
        long long r = F(n,p/2);
        return ((r%m)*(r%m))%m;
    }
    else return ((n%m)*(F(n,p-1)%m))%m;
}
int main()
{
    long long b,p;
    while(scanf("%lld %lld %lld", &b,&p,&m)==3){
        printf("%lld\n", F(b,p));
    }
    return 0;
}
