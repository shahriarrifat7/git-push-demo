#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef unsigned long long ULL;
typedef long long LL;

template <class T> inline void deb(T a){cout << a <<'\n';}
template <class T1, class T2> inline void deb(T1 a, T2 b){cout << a << ' ' << b <<'\n';}
template <class T1, class T2, class T3> inline void deb(T1 a, T2 b, T3 c){cout << a <<' ' << b << ' ' << c <<'\n';}


int main()
{
    vector < int > v;
    v.pb(1);
    v.pb(1);
    v.pb(2);
    for(int i = 0; i<v.size(); i++) deb(v[i]);
    int l = lower_bound(v.begin(), v.end(), 1)-v.begin();
    deb(l);
  //  v.erase(v.begin()+1,v.begin()+3);
  //   for(int i = 0; i<v.size(); i++) deb(v[i]);
}
