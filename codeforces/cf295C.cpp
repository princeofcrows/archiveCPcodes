#include <bits/stdc++.h>

using namespace std;

#define MX 100005
#define int long long

int ara[MX], ara2[MX], ara3[MX];

struct info{
    int l, r, d;
}op[MX];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k, i, a, b;
    cin >> n >> m >> k;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    for(i=1;i<=m;i++){
        cin >> op[i].l >> op[i].r >> op[i].d;
    }
    memset(ara2, 0, sizeof ara2);
    memset(ara3, 0, sizeof ara3);
    for(i=0;i<k;i++){
        cin >> a >> b;
        ara2[a]++;
        ara2[b+1]--;
    }
    for(i=1;i<=m;i++){
        ara2[i] += ara2[i-1];
    }
    for(i=1;i<=m;i++){
        ara3[op[i].l]+=(op[i].d*ara2[i]);
        ara3[op[i].r+1]-=(op[i].d*ara2[i]);
    }
    for(i=1;i<=n;i++){
        ara3[i] += ara3[i-1];
    }
    for(i=1;i<=n;i++){
        cout << ara[i] + ara3[i] << " ";
    }
    return 0;
}










