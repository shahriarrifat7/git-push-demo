#include<queue>
#include<iostream>

using namespace std;

int main()
{
    priority_queue< int >q;
    int n,m;
    for(int i=0 ; i<4; i++){
        cin>>n;

       // q.push(make_pair(n,m));
       q.push(n);
    }
    while(!q.empty()) {

        cout<< q.top() <<endl;
        q.pop();
    }
}
