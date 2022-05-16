#include <bits/stdc++.h>

using namespace std;
#define int long long
#define MX 1000005

int ara[MX], tree1[5*MX], sr[MX], tree2[5*MX];
map <int, int> mp;

void update1(int node, int b, int e, int i, int val){
    if(b>i||e<i) return;
    if(b==i&&e==i){
        tree1[node] += val;
        return;
    }
    int l = node*2;
    int r = node*2 + 1;
    int m = (b+e)/2;
    update1(l, b, m, i, val);
    update1(r, m+1, e, i, val);
    tree1[node] = tree1[r]+tree1[l];
}

int query1(int node, int b, int e, int i, int j){
    if(b>j||e<i) return 0;
    if(b>=i&&e<=j){
        return tree1[node];
    }
    int l = node*2;
    int r = node*2 + 1;
    int m = (b+e)/2;
    int p1 = query1(l, b, m, i, j);
    int p2 = query1(r, m+1, e, i, j);
    return p1+p2;
}


void update2(int node, int b, int e, int i, int val){
    if(b>i||e<i) return;
    if(b==i&&e==i){
        tree2[node] += val;
        return;
    }
    int l = node*2;
    int r = node*2 + 1;
    int m = (b+e)/2;
    update2(l, b, m, i, val);
    update2(r, m+1, e, i, val);
    tree2[node] = tree2[r]+tree2[l];
}

int query2(int node, int b, int e, int i, int j){
    if(b>j||e<i) return 0;
    if(b>=i&&e<=j){
        return tree2[node];
    }
    int l = node*2;
    int r = node*2 + 1;
    int m = (b+e)/2;
    int p1 = query2(l, b, m, i, j);
    int p2 = query2(r, m+1, e, i, j);
    return p1+p2;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    //freopen("in.txt", "r", stdin);

    int n, i, j, ans, a, b;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        sr[i] = ara[i];
    }
    memset(tree1, 0, sizeof tree1);
    memset(tree2, 0, sizeof tree2);
    sort(sr+1, sr+n+1);
    j = 1;
    for(i=1;i<=n;i++){
        mp[sr[i]] = j++;
    }
    for(i=1;i<=n;i++){
        ara[i] = mp[ara[i]];
        //cout << ara[i] << " ";
    }
    //cout << endl;
    for(i=n;i>=1;i--){
        update1(1, 1, n, ara[i], 1);
    }
    ans = 0;
    for(i=1;i<=n;i++){
        update1(1, 1, n, ara[i], -1);
        if(ara[i]+1<=n) a = query2(1, 1, n, ara[i]+1, n);
        else a = 0;
        if(ara[i]-1>=1) b = query1(1, 1, n, 1, ara[i]-1);
        else b = 0;
        //cout << a <<" "<<b<<endl;
        ans += a*b;
        update2(1, 1, n, ara[i], 1);
    }
    cout << ans;
    return 0;
}















