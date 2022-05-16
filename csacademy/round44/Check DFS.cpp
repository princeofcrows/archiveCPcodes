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
long long ara[100005];
bool vis[100005];
map <long long, long long> dat;
vector <long long> y;
vector < vector <long long> > g(100005);

bool compare(long long i, long long j){
    return (dat[i]<dat[j]);
}

void dfs(long long u){
    if(vis[u]) return;
    vis[u] = true;
    y.push_back(u);
    for(int i=0;i<g[u].size();i++){
        dfs(g[u][i]);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        dat[ara[i]] = i;
    }
    for(i=1;i<=m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(i=1;i<=n;i++){
        sort(g[i].begin(), g[i].end(), compare);
    }
    memset(vis, false, sizeof vis);
    for(i=1;i<=n;i++){
        if(!vis[ara[i]]){
            dfs(ara[i]);
        }
    }
    for(i=0;i<y.size();i++){
        if(y[i]!=ara[i+1]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}













