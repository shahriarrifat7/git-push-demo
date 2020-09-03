#include<bits/stdc++.h>
//#include<vector>
//#include<iostream>

using namespace std;

int main()
{
   // vector<char>v;
  // vector <int> v;
    int ara[3];
    for(int i=0; i<3; i++) {
       // if(i%2==1) v.push_back('A'+i-1);
       // else v.push_back('A'+i);
      // v.push_back(i);
        ara[i] = i;
    }
    int c=0;
    do{
        for(int i=0; i<3; i++) cout<<ara[i];
        putchar('\n');
        c++;
        cout<<c<<endl;
        putchar('\n');
    }while(next_permutation(ara, ara+3));

    return 0;
}
