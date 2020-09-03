#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
///primes  131,163,173,197,347,457,1000000000+7, 1000000000+97, 1000000000+9, 1000000000+87;
///Hashing part
LL Hash(string s, LL m, LL Base, LL mod) {
    LL hash_value = 0, power = 1;
    for(int i = m-1; i>=0; --i) {
        hash_value += (s[i] * power) % mod ;
        hash_value %= mod;
        power = (power * Base) % mod ;
    }
    return hash_value;
}

///String matching part
int match(string text, string pattern) {
    int n = text.length(), m = pattern.length();
    if(n < m) return -1;
    if(n == 0 || m == 0) return -1;
    LL B = 347, M = 1000000000 + 7;
    LL hash_text = Hash(text, m, B, M);
    LL hash_pattern = Hash(pattern, m, B, M);
    if(hash_text == hash_pattern) return 0; ///to avoid hash collision check character by character or hash with different B,M
    // Calculating B^m-1
    LL power = 1;
    for(int i = 1; i<m; i++ ) {
        power *= B;
        power %= M;
    }
    ///updating rolling hash
    for(int i = m; i<n; ++i) {
        hash_text = (hash_text - ((text[i-m]*power)%M) ) % M ;
        hash_text = (hash_text + M) % M ; ///handling negative value
        hash_text = (hash_text * B) % M;
        hash_text = (hash_text + text[i]) % M;
        if(hash_text == hash_pattern) {
            return i-m+1; ///returns the index of the match in text
            ///to avoid hash collision check character by character or hash with different B,M
        }
    }
    return -1;
}
int main() {
    string text, pattern;

    cin >> text >> pattern;

    cout << "matched at index : " << match(text, pattern) << endl;
    return 0;
}
