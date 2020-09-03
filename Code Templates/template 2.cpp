#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define uu first
#define vv second

#define M 100100
#define sqr(a) ((a)*(a))
#define pi 2*acos(0.0)
#define mem(a,b)   memset(a,b,sizeof(a))
#define FOR(i,a,b) for(i=a; i<=b; ++i)
#define ROF(i,a,b) for(i=a; i>=b; --i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)

#define sc(x)        scanf("%d",&x)
#define sc2(x,y)     scanf("%d %d",&x,&y)
#define sc3(x,y,z)   scanf("%d %d %d",&x,&y,&z)
#define scl(x)       scanf("%lld",&x)
#define scl2(x,y)    scanf("%lld %lld",&x,&y)
#define scl3(x,y,z)  scanf("%lld %lld %lld",&x,&y,&z)

#define scul(x)      scanf("%llu",&x)
#define sc64(x)      scanf("%I64d",&x)

#define scd(x)       scanf("%lf",&x)
#define scd2(x,y)    scanf("%lf %lf",&x,&y)
#define scd3(x,y,z)  scanf("%lf %lf %lf",&x,&y,&z)

#define scld(x)      scanf("%Lf",&x)
#define scc(x)       scanf("%ch",&x)
#define scs(x)       scanf("%s",x)
#define scs2(x,y)    scanf("%s %s",x,y)

#define pf         printf
#define pfn        putchar('\n')
#define YES        printf("YES\n")
#define NO        printf("NO\n")
#define Yes        printf("Yes\n")
#define No        printf("No\n")
#define pf64(x)    printf("%I64d",x)
#define pfC(x)     printf("Case %d: ",x)
#define pfCn(x)    printf("Case %d:\n",x)
#define read(file) freopen(file, "r", stdin)

typedef long long LL;
typedef unsigned long long ULL;
typedef double D;
typedef long double LD;
typedef pair<int, int> PII;
typedef vector< int > VI;
typedef map<int, int> MII;
typedef map<string, int> MSI;
typedef set< int > SI;

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b){return (a/gcd(a,b))*b;}
inline D dist(D x1, D y1, D x2, D y2) { return sqrt(sqr(x1 - x2) + sqr(y1 - y2)); }

template <class T> inline void deb(T a){cout << a <<'\n';}
template <class T1, class T2> inline void deb(T1 a, T2 b){cout << a << ' ' << b <<'\n';}
template <class T1, class T2, class T3> inline void deb(T1 a, T2 b, T3 c){cout << a <<' ' << b << ' ' << c <<'\n';}

// template <class T> T power(T N,T P){  return (P==0)?  1: N*power(N,P-1); }
template<class T>T power(T a,T b){
    if(b==0)return 1;
    else if(b%2==1)return a*power(a,b-1);
    else {
        T k=power(a,b/2);
        return k*k;
    }
}

//int ara[101];

int main()
{
  //  read("input.txt");

    int t,i,j,tc=0;
    int a,b,n;
    while(sc(n)==1) {

    }

    /// check the cases for n = 0,1,2,3 ///
    return 0;
}
