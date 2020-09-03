#include<bits/stdc++.h>
using namespace std;
#define null NULL
struct node {
    bool endmark;
    node* next[26+1];
    node() {
        endmark = false;
        for(int i = 0; i<26; i++) {
            next[i] = null;
        }
    }
} ;
node * root;

void Insert(char* str, int len) {
    node* curr = root;
    for(int i = 0; i<len; i++) {
        int id = str[i]-'a';
        if(curr->next[id] == null) curr->next[id] = new node();
        curr = curr->next[id];
    }
    curr->endmark = true;
}

bool Search(char* str, int len) {
    node* curr = root;
    for(int i = 0; i<len; i++) {
        int id = str[i]-'a';
        if(curr->next[id] == null) return false;
        curr = curr->next[id];
    }
    return curr->endmark;
}

void del(node* curr) {
    for(int i = 0; i<26; i++) {
        if(curr->next[i]) del(curr->next[i]);
    }
    delete(curr);
}
int main() {
    int n,q;
    char s[50];
    root = new node();
    cout << "No. of words :\n" ;
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> s;
        Insert(s, strlen(s));
    }
    cout << "No. of query :\n";
    cin >> q;
    for(int i = 0; i<q; i++) {
        cin >> s;
        if(Search(s, strlen(s))) printf("found\n");
        else printf("not found\n");
    }
    del(root);
    return 0;
}
