#include<bits/stdc++.h>
using namespace std;

#define M 200100
#define FOR(i,a,b) for(i=a; i<=b; ++i)

#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define sc64(x) scanf("%I64d",&x)
#define scul(x) scanf("%llu",&x)
#define scd(x) scanf("%lf",&x)
#define scld(x) scanf("%Lf",&x)
#define scs(x) scanf("%s",s)
#define pfC(x) printf("Case %d: ",x)
#define pfCn(x) printf("Case %d:\n",x)
#define pfn putchar('\n');
#define pf64(x) printf("%I64d",x)
#define pf printf

typedef long long ll;
typedef unsigned long long ull;
typedef double D;
typedef long double LD;

template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline void deb(T a, T b){
    if(!b) cout<<a<<'\n';
    else cout<<a<<' '<<b<<'\n';
}
struct node{
    int roll;
    node *left, *right;
    node()
    {
        left=NULL;
        right=NULL;
    }
};
node *root=NULL;
void print_preorder(node *current)
{
    if(current==NULL) return;
    cout<<current->roll<<endl;
    print_preorder(current->left);
    print_preorder(current->right);
}
void ins(int roll){
    if(root==NULL){
        root=new node();
        root->roll=roll;
    }
    else{
        node *current=root,*parent;
        while(current!=NULL){
            if(roll<current->roll){
                parent=current;
                current=current->left;
            }
            else{
                parent=current;
                current=current->right;
            }
        }
        node *newnode=new node();
        newnode->roll=roll;
        if(newnode->roll<parent->roll) parent->left=newnode;
        else parent->right=newnode;

    }

}


int main()
{
    int t,i,j,tc=0;
    ins(2);ins(3);
    ins(10); ins(6);
    ins(12); ins(1);

    return 0;
}
