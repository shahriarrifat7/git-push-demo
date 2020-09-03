#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    char line[1000];
    while(gets(line)){
        stringstream ss(line);
        int num;
        string s;
        vector< string >v;
        while(ss>>s) v.push_back(s);
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<' ';
        }
        puts("");
    }
    return 0;
}
