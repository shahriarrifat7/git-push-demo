#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

#define x first
#define y second

pii extendedEuclid(int a, int b)
{
    if(b==0) return pii(1,0);
    else {
        pii d = extendedEuclid(b, a%b);
        return pii(d.y, d.x - d.y*(a/b));
    }
}

int main()
{
    int a,b;
    while(cin>>a>>b){
        pii ans = extendedEuclid(a,b) ;
        cout << ans.x <<' ' << ans.y << endl;
    }
}
