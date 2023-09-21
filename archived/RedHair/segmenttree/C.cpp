#include <bits/stdc++.h>

using namespace std;
#define MX 1000005
#define int long long

int ara[MX], fa[MX], ba[MX], tree[MX*5];
map <int, int> fm;
map <int, int> bm;

void update(int node, int b, int e, int i, int val){
    if(i>e||i<b) return;
    if(i<=b&&i>=e){
        tree[node] += val;
        return;
    }
    int le = node*2;
    int ri = node*2 + 1;
    update(le, b, (b+e)/2, i, val);
    update(ri, (b+e)/2+1, e, i, val);
    tree[node] = tree[le] + tree[ri];
}

int query(int node, int b, int e, int i, int j){
    if(i>e||j<b) return 0;
    if(i<=b&&j>=e){
        return tree[node];
    }
    if(b==e) return 0;
    int le = node*2;
    int ri = node*2 + 1;
    int p1 = query(le, b, (b+e)/2, i, j);
    int p2 = query(ri, (e+b)/2+1, e, i, j);
    return p1+p2;

}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j, ans, n;
    cin >> n;
    memset(tree, 0, sizeof tree);
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    fa[0] = 0;
    for(i=1;i<=n;i++){
        fa[i] = fm[ara[i]]+1;
        fm[ara[i]] = fa[i];
    }
    for(i=n;i>=1;i--){
        ba[i] = bm[ara[i]]+1;
        bm[ara[i]] = ba[i];
        update(1, 1, n, ba[i], 1);
    }
    ans = 0;
    for(i=1;i<=n;i++){
        update(1, 1, n, ba[i], -1);
        ba[i]--;
        ans += query(1, 1, n, 1, fa[i]-1);
    }
    cout << ans;
    return 0;
}
