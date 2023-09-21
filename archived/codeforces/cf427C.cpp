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

string star[200000], str, str1;
long long ara[100005], ara2[100005], ara3[200005], mnc;
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
stack <long long> stk;
vector <long long> g[100005];
vector <long long> rg[100005];

void toposort(long long u){
    ara2[u] = 1;
    for(long long i=0;i<g[u].size();i++){
        if(ara2[g[u][i]]==0) toposort(g[u][i]);
    }
    stk.push(u);
}

void scc(long long u){
    ara2[u] = 1;
    x.push_back(u);
    mnc = min(mnc, ara[u]);
    for(long long i=0;i<rg[u].size();i++){
        if(ara2[rg[u][i]]==0) scc(rg[u][i]);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, mn, c, a, b, mx, d, k, l, f;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    cin >> m;
    for(i=1;i<=m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        rg[b].push_back(a);
    }
    memset(ara2, 0, sizeof ara2);
    for(i=1;i<=n;i++){
        if(!ara2[i]) toposort(i);
    }
    memset(ara2, 0, sizeof ara2);
    ans = 1;
    mn = 0;
    d = 1000000007;
    while(!stk.empty()){
        a = stk.top();
        stk.pop();
        if(!ara2[a]){
            x.clear();
            mnc = 99999999999999999;
            c = 0;
            scc(a);
            mn+=mnc;
            for(i=0;i<x.size();i++){
                if(ara[x[i]]==mnc) c++;
            }
            ans *= c;
            ans%=d;
        }
    }
    cout << mn << " " << ans;
    return 0;
}







