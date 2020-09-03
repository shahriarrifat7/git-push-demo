#include <bits/stdc++.h>

using namespace std;
vector < int > primes, bigger_primes;
int ara[100005];
void sieve() {
    for(int i = 4; i <= 100000; i += 2) ara[i] = 1;
    for(int i = 3; i*i <= 100000; i += 2) {
        if(!ara[i]) {
            for(int j = i*i; j<=100000; j += 2*i) ara[j] = 1;
        }
    }
    for(int i = 2; i<=100000; i++) if(!ara[i]) primes.push_back(i);
  //  cout << primes.size() <<endl;
}

void segmented_sieve() {
    int sz = primes.size();
    int j;
    for(int i = 1000000000; i<1000001000; i++) {
        for( j = 0; j<sz; j++) {
            if((i % primes[j]) == 0) break;
        }
        if(j == sz) bigger_primes.push_back(i);
    }
}

int main() {
    sieve();
    segmented_sieve();
 //   cout << bigger_primes[bigger_primes.size()-1] <<endl;
 //   for(int i = 0; i<=100; i++) cout << bigger_primes[i] << endl;
      for(int i = 0; i<=20; i++) cout << primes[i] << endl;

    return 0;
}
