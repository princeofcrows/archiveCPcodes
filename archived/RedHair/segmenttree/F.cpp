#include <bits/stdc++.h>
#define MX 100005

using namespace std;

int ara[MX], tree[4*MX], sor[MX];
vector <int> grp[MX];
map <int, int> mp;

void init(int node, int i, int j){
    if(i==j){
        tree[node] = ara[i];
        return;
    }
    int l = node*2;
    int r = node*2+1;
    int m = (i+j)/2;
    init(l, i, m);
    init(r, m+1, j);
    tree[node] = __gcd(tree[l], tree[r]);;
    return;
}

int query(int node, int b, int e, int i, int j){
    if(b>j||e<i){
        return 0;
    }
    if(b>=i&&e<=j){
        return tree[node];
    }
    int l = node*2;
    int r = node*2+1;
    int m = (b+e)/2;
    int p1 = query(l, b, m, i, j);
    int p2 = query(r, m+1, e, i, j);
    return __gcd(p1, p2);
}

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, t, i, j, g, a, b, c;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        sor[i] = ara[i];
    }
    sort(sor+1, sor+n+1);
    j = 1;
    for(i=1;i<=n;i++){
        if(!mp[sor[i]]) mp[sor[i]] = j++;
    }
    for(i=1;i<=n;i++){
        grp[mp[ara[i]]].push_back(i);
    }
    init(1, 1, n);
    cin >> t;
    while(t--){
        cin >> i >> j;
        a = query(1, 1, n, i, j);
        //cout << a << " ";
        int d = mp[a];
        b = lower_bound(grp[d].begin(), grp[d].end(), i) - grp[d].begin();
        c = upper_bound(grp[d].begin(), grp[d].end(), j) - grp[d].begin();
        a = c-b;
        a = max(0, a);
        cout << (j-i+1) - a << endl;
    }
    return 0;
}











