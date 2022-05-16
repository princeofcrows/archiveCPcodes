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

string star[200000], str, str1, str2;
long long ara[105], ara2[100005];
vector < pair <long long, long long> > ab;
vector < vector <long long> > g(105);
bool flag;

void dfs(long long u){
    if(ara[u]) return;
    ara[u] = 1;
    for(long long i=0;i<g[u].size();i++) dfs(g[u][i]);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l, n, m;
    cin >> n >> m;
    c = 1;
    set <long long> st;
    for(i=0;i<m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    memset(ara, 0, sizeof ara);
    ans = 0;
    for(i=1;i<=n;i++){
        if(!ara[i]){
            dfs(i);
            ans++;
        }
    }
    c = 1;
    cout << (c<<(n-ans));
    return 0;
}













