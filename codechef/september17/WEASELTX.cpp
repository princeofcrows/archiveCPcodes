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

long long ara[9005][5005], ara2[5005], mx;
vector <long long> g[5005], x;
bool vis[5005];


void dfs(long long u, long long j, long long lev){
    vis[u] = true;
    ara[j][u] = ara[j-1][u];
    for(int i=0;i<g[u].size();i++){
        if(!vis[g[u][i]]){
            dfs(g[u][i], j, lev+1);
            ara[j][u] ^= ara[j][g[u][i]];
        }
    }
    mx = max(lev, mx);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, b, l, n, d, ans, q;
    cin >> n >> q;
    a = 1;
    for(i=0;i<=50;i++){
        x.push_back(a);
        a*=2;
    }
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(i=0;i<n;i++){
        cin >> ara[0][i];
    }
    mx = 0;
    for(i=1;i<=9000;i++){
        memset(vis, false, sizeof vis);
        dfs(0, i, 1);
        //cout << ara[i][0] <<" ";
    }
    l = lower_bound(x.begin(), x.end(), mx) - x.begin();
    l = x[l];
    //cout << l << endl;
    while(q--){
        cin >> a;
        a = a%l;
        cout << ara[a][0] << endl;
    }
    return 0;
}













