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
vector <pair <int, int> > ab;
vector <int> g[105];
int ara[105], le;

void dfs(int u, int par){
    if(u==0){
        le = par;
        return;
    }
    dfs(g[u][0], u);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    scanf("%d", &n);
    ab.push_back({0, 0});
    for(i=1;i<=n;i++){
        scanf("%d%d", &a, &b);
        ab.push_back({a, b});
        g[i].push_back(b);
        g[a].push_back(i);
    }
    le = -1;
    for(i=0;i<g[0].size();i++){
        if(le!=-1){
            ab[le].second = g[0][i];
            ab[g[0][i]].first = le;
        }
        dfs(g[0][i], 0);
    }
    for(i=1;i<=n;i++){
        printf("%d %d\n", ab[i].first, ab[i].second);
    }
    return 0;
}





















