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
vector <long long> g[100005];
string str, str1;
long long ara[100005][3][12];
bool vis[100005];
map <string, long long> dat;
long long m, n, k, x;

long long bigmod(long long a, long long b, long long c){
    if(b==0) return 1%c;
    long long ans = bigmod(a, b/2, c);
    ans = (ans*ans)%c;
    if(b%2) ans = (ans*(a%c))%c;
    return ans%c;
}

long long dfs(long long u, long long can, long long used, long long c){
    if(g[u].size()==1) return 0;
    if(ara[u][can][used]!=-1) return ara[u][can][used];
    long long ret = 0;
    for(long long i=0;i<g[u].size();i++){
        if(can==0&&1+used<=x) ret += (bigmod(k-1, (g[u].size()-1), c)*dfs(g[u][i], 1, 1+used, c))%c;
        ret += dfs(g[u][i], 0, used, c);
        ret%=c;
    }
    return ara[u][can][used] = ret%c;
}

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i,mx, d, l, h, a, b, c;
    cin >> n >> m;
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cin >> k >> x;
    c = 1000000007;
    ans = bigmod(m-1, n, c);
    memset(ara, -1, sizeof ara);
    cout << (dfs(1, 0, 0, c)+ans)%c;
    return 0;
}





















