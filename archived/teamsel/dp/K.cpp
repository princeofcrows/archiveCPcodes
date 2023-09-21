//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

long long ara[100005], dp[100005], n, m;
vector <long long > g[100005];
bool vis[100005];

void dfs(long long u){
    vis[u] = true;
    dp[u] = ara[u];
    for(int i=0;i<g[u].size();i++){
        if(!vis[g[u][i]]){
            dfs(g[u][i]);
            dp[u] = max(dp[u], dp[u]+dp[g[u][i]]);
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        ans = -99999999999999;
        for(i=1;i<=n;i++){
            g[i].clear();
            scanf("%lld", &ara[i]);
            ans = max(ans, ara[i]);
        }
        for(i=1;i<n;i++){
            scanf("%lld%lld", &a, &b);
            g[a].push_back(b);
            g[b].push_back(a);
        }
        memset(vis, false, sizeof vis);
        memset(dp, 0, sizeof dp);
        mx = 0;
        dfs(1);
        for(i=1;i<=n;i++){
            mx = max(mx, dp[i]);
        }
        if(mx==0) cout << ans << endl;
        else cout << mx << endl;
    }
    return 0;
}












