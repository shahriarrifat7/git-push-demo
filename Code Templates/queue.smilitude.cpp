#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue< int > q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        q.push(m);
    }
    while(!q.empty()){
        if(q.size()==n)cout<<q.top();
        else cout<<' '<<q.top();
        q.pop();
    }
    return 0;
}
