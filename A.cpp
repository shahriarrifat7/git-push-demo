#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pb push_back
#define mem(a,b)   memset(a,b,sizeof(a))
#define FOR(i,a,b) for(i=a; i<=b; ++i)
#define ROF(i,a,b) for(i=a; i>=b; --i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll ara[005];
int main() {
    fastio;
    ll t,n,i;
    cin >> t;

    while(t--) {
        cin >> n;
        string s;
        cin >> s;

        int c0=0,c1=0;
        FOR(i,0,s.size()-1) {
            if(s[i] == '0') c0++;
            else c1++;
        }


        FOR(i,0,n-1) {
                if(c0>c1) cout <<"0";
                else cout <<"1";
        }
        cout << endl;

    }
    return 0;
}
