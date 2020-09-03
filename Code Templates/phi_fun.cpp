#include<bits/stdc++.h>
#define M 1000
using namespace std;

int Phi(int n){
    int ret = n;
    for(int i=2; i*i<=n; ++i){
        if(n%i==0){
            while(n%i==0){
                n=n/i;
            }
            ret -= (ret/i);
        }
    }
    if(n>1) ret -= ret/n;
    return ret;
}

int phi[M];

void Phi_sieve()
{
    for(int i=1; i<M; i++){
        phi[i] = i;
    }
    for(int p=2; p<M; p++){
        if(phi[p]==p){
            for(int k=p; k<M; k+=p){
                phi[k] -= phi[k]/p;
            }
        }
    }
}
int main()
{
    int n;
    Phi_sieve();
    while(cin>>n){
        cout << Phi(n) << endl;
        cout << phi[n] << endl;
    }
}
