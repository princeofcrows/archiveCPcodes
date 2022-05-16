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
vector <pair <long long, long long> > ab;
vector <long long> g[3005];
string str, str1;
long long ara[3005];
bool vis[3005];

void dfs(long long u, long long len, long long par){
    if(len==2){
        ara[u]++;
        return;
    }
    for(long long i=0;i<g[u].size();i++){
        if(g[u][i]!=par) dfs(g[u][i], len+1, u);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, c, h, m, b;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> a >> b;
        g[a].push_back(b);
    }
    ans = 0;
    for(i=1;i<=n;i++){
        memset(ara, 0, sizeof ara);
        memset(vis, false, sizeof vis);
        dfs(i, 0, -1);
        for(j=1;j<=n;j++){
            if(ara[j]) {
                ans += (ara[j]-1)*ara[j]/2;
            }
        }
    }
    cout << ans;
    return 0;
}
