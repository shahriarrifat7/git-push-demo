
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pb push_back
#define mem(a,b)   memset(a,b,sizeof(a))
#define FOR(i,a,b) for(i=a; i<=b; ++i)
#define ROF(i,a,b) for(i=a; i>=b; --i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define M 1000200
vector<int>primes;

bool ok[M];

void sieve() {
    for(int i=3; i<=sqrt(M); i+=2) {
        if(!ok[i]){
            for(int j=i+i; j<=M; j+=i) {
                ok[j]=1;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<=M; i+=2) if(!ok[i]) primes.pb(i);
}

int main() {
    fastio;
    int t,i,tc=0;
    cin >> t;
    sieve();

    while(t--) {
        ll n;
        cin >> n;
        i=0;
        ll ans=1;
        while(primes[i]<=sqrt(n)) {
          //  if(n%primes[i] == 0) {
                ll c=0;
                while(n%primes[i]==0 && n>1) c++,n/=primes[i];
                ans*=(c+1);
          //  }
            i++;
        }
        if(n>1) ans*=2;

        cout << "Case " << ++tc <<": " << --ans <<endl;
    }



    return 0;
}
