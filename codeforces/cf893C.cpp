#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MX 100005
#define inf 999999999999
vector <int> x[MX];
int ara[MX], vis[MX], mcos;

void dfs(int u){
    if(vis[u]) return;
    vis[u] = 1;
    mcos = min(mcos, ara[u]);
    for(int i=0;i<x[u].size();i++){
        dfs(x[u][i]);
    }
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, j, n, m, a, b, c, t;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    for(i=1;i<=m;i++){
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    memset(vis, 0, sizeof vis);
    a = 0;
    for(i=1;i<=n;i++){
        if(!vis[i]){
            mcos = inf;
            dfs(i);
            a+=mcos;
        }
    }
    cout << a;
    return 0;
}
