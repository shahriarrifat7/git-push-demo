#include<bits/stdc++.h>
#define M 100000000
int marked[M/32+2];


using namespace std;
bool check(int N, int pos) {return (bool)(N&(1<<pos));}
int sett(int N, int pos) {return N=N |(1<<pos);}

int main()
{
    int i,j,sq;
    sq=sqrt(M);
    for(i=2; i<=sq; i++){
        if(check(marked[i>>5],i&31)==0){
            for(j=i+i; j<=M; j=j+i){
                marked[j>>5]=sett(marked[j>>5],j&31);
            }
        }
    }
    for(i=300; i<=500; i++){
        if(check(marked[i>>5],i&31)==0) printf("%d\n",i);
    }
    return 0;
}
