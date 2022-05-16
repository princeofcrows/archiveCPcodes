#include <bits/stdc++.h>
using namespace std;
#define MX 1000005

string str;

struct node{
    int l, r, f;
}tree[4*MX];

void init(int nod, int i, int j){
    int t;
    if(i==j){
        if(str[i-1]=='('){
            tree[nod].l = 1;
            tree[nod].f = 0;
            tree[nod].r = 0;
        }
        else{
            tree[nod].l = 0;
            tree[nod].f = 0;
            tree[nod].r = 1;
        }
        return;
    }
    int le = nod*2;
    int ri = nod*2+1;
    init(le, i, (i+j)/2);
    init(ri, (i+j)/2+1, j);
    t = min(tree[le].l, tree[ri].r);
    tree[nod].f = tree[le].f + tree[ri].f + 2*t;
    tree[nod].l = tree[le].l + tree[ri].l - t;
    tree[nod].r = tree[le].r + tree[ri].r - t;
}

node query(int nod, int b, int e, int i, int j){
    int t;
    if(b>j||e<i){
        node emn;
        emn.f = 0;
        emn.l = 0;
        emn.r = 0;
        return emn;
    }
    if(i<=b&&j>=e){
        return tree[nod];
    }
    int le = nod*2;
    int ri = nod*2+1;
    node p1 = query(le, b, (b+e)/2, i, j);
    node p2 = query(ri, (b+e)/2+1, e, i, j);
    t = min(p1.l, p2.r);
    node p3;
    p3.f = p1.f + p2.f + 2*t;
    p3.l = p1.l + p2.l - t;
    p3.r = p1.r + p2.r - t;
    return p3;
}

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, i, j, q;
    cin >> str;
    n = str.length();
    init(1, 1, n);
    cin >> q;
    while(q--){
        cin >> i >> j;
        cout << query(1, 1, n, i, j).f << endl;
    }
    return 0;
}










