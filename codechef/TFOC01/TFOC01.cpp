//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;
vector <long long> g[500005];
long long ara[100005];
long long ara2[100005], ans;

void dfs(long long u, long long k, long long a, long long par){
    //if(ara[u]) return;
    if(a==k){
        ans++;
        return;
    }
    for(int i=0;i<g[u].size();i++){
        if(g[u][i]!=par) dfs(g[u][i], k, a+1, u);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n,  temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f,s, k;
    cin >> n >> k;
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    ans = 0;
    memset(ara, 0, sizeof ara);
    for(i=1;i<=n;i++){
        dfs(i, k, 0, -1);
        ara[i] = 1;
    }
    cout << ans/2;
    return 0;
}




















