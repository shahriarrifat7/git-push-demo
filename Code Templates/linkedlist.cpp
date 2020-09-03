#include<bits/stdc++.h>
using namespace std;

#define M
#define FOR(i,a,b) for(i=a; i<=b; ++i)

#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scul(x) scanf("%llu",&x)
#define scs(x) scanf("%s",s)
#define ptC(x) printf("Case %d: ",x)
#define ptCn(x) printf("Case %d:\n",x)
#define pt(n) putchar('\n');
#define pf printf

typedef long long LL;
typedef unsigned long long ULL;
typedef double D;
typedef long double LD;

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}

struct node {
    int roll;
    node *next;
    node *prev;
};
node *root=NULL;
node *tail;

void append(int roll){
    if(root==NULL){
        root=new node();
        root->roll=roll;
        root->next=NULL;
        tail=root;
    }
    else {
        node *newnode=new node();
        newnode->roll=roll;
        tail->next=newnode;
        newnode->next=NULL;
        tail=tail->next;
    }
}
void print()
{
    node *current_node=root;
    while(current_node!=NULL){
        pf("%d\n",current_node->roll);
        current_node=current_node->next;
    }
}
void delete_node(int roll) {
    node *current_node=root;
    node *previous_node=NULL;
    while(current_node->roll!=roll) {
        previous_node=current_node;
        current_node=current_node->next;
    }
    if(current_node==root){
        node *temp=root;
        root=root->next;
        delete(temp);
    }
    else {
        previous_node->next=current_node->next;
        delete(current_node);
    }
}
void add_node(int roll1, int roll2){
    node *current_node=root;
    while(current_node->roll!=roll1){
        current_node=current_node->next;
    }
    node *nextnode=current_node->next;
    node *newnode=new node();
    newnode->roll=roll2;
    current_node->next=newnode;
    newnode->next=nextnode;
}
int main()
{
    int t,i,tc=0,ara[5];

    FOR(i,0,5) append(i);
    delete_node(0);
    delete_node(3);
    add_node(2,6);
    print();
    return 0;
}
