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

#define endl       '\n'
#define pfC(x)     cout<<"Case "<<x<<": "
#define pfCn(x)    cout<<"Case "<<x<<":"<<'\n'
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
//template< class T > T power(T N,T P){  return (P==0)?  1: N*power(N,P-1); }
template<class T>T power(T a,T b){
    if(b==0)return 1;
    else if(b%2==1)return a*power(a,b-1);
    else {
        T k=power(a,b/2);
        return k*k;
    }
}

//int ara[M];

int main()
{
  //  read("input.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,i,j,tc=0;
    int a,b,n;
    string s;

    return 0;
}
