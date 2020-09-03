#include<stdio.h>
#include<iostream>
using namespace std;

#define pb push_back
#define MP make_pair
#define uu first
#define vv second

#define M 500001
#define sqr(a) ((a)*(a))
#define PI 2*acos(0.0)
#define FOR(i,a,b) for(i=a; i<=b; ++i)
#define ROF(i,a,b) for(i=a; i>=b; --i)
#define mem(a,b)   memset(a,b,sizeof(a))

#define sc(x)      scanf("%d",&x)
#define scl(x)     scanf("%lld",&x)
#define scul(x)    scanf("%llu",&x)
#define sc64(x)    scanf("%I64d",&x)
#define scd(x)     scanf("%lf",&x)
#define scld(x)    scanf("%Lf",&x)
#define scc(x)     scanf("%ch",&x)
#define scs(x)     scanf("%s",x)

#define pf         printf
#define pfn        putchar('\n')
#define pf64(x)    printf("%I64d",x)
#define pfC(x)     printf("Case %d: ",x)
#define pfCn(x)    printf("Case %d:\n",x)
#define read(file) freopen(file, "r", stdin)

typedef long long ll;
typedef unsigned long long ull;
typedef double D;
typedef long double LD;

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b){return (a/gcd(a,b))*b;}
template <class T> inline void deb(T a){cout<<"debugging -> "<<a<<'\n';}
template <class T> inline void deb2(T a, T b){cout<<"first value-> "<<a<<' '<<"second value-> "<<b<<'\n';}
template< class T > T power(T N,T P){  return (P==0)?  1: N*power(N,P-1); }
int di[M+2];

int main()
{
  //  read("input.txt");
    int t,i,j,tc=0;
    int a,b,n;
    di[1] = -1;

    for( i=2; i*i<=M; i++){
        for( j=i; i*j<=M; j++){
            di[i*j] += i+j;
            if(i==j) di[i*j] -= i;
        }
    }
    sc(t);
    while(t--){
        sc(n);
        pf("%d\n",1+di[n]);
    }
    return 0;
}
