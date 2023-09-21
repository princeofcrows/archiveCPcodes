//price_of_crows
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
long long ara[500005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <string, long long> dat;
long long dp[10], sz;
vector <long long> graph[150005];
bool pos, vis[150005];

void dfs(long long s, long long u){
    if(vis[u]) return;
    vis[u] = true;
    x.push_back(u);
    sz++;
    for(long long i=0;i<graph[u].size();i++){
        dfs(s, graph[u][i]);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> n >> m;
    memset(ara, 0, sizeof ara);
    for(i=0;i<m;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        ara[a]++;
        ara[b]++;
    }
    memset(vis, false, sizeof vis);
    pos = true;
    for(i=1;i<=n;i++){
        if(!vis[i]){
            x.clear();
            sz = 0;
            dfs(i, i);
            for(j=0;j<x.size();j++){
                if(ara[x[j]]!=sz-1){
                    cout << "NO";
                    return 0;
                }
            }
        }
        if(!pos) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}














