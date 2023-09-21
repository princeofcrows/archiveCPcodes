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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector < vector <long long> > g(100005);
bool flag;

void dfs(long long u, long long col){
    if(ara2[u]) return;
    ara2[u] = 1;
    if(ara[u]!=col){
        flag = false;
        return;
    }
    for(long long i=0;i<g[u].size();i++){
        dfs(g[u][i], col);
    }
}

void groot(long long root){
    memset(ara2, 0, sizeof ara2);
    ara2[root] = 1;
    flag = true;
    for(long long i=0;i<g[root].size();i++){
        dfs(g[root][i], ara[g[root][i]]);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l, n, m;
    cin >> n;
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        ab.push_back({a, b});
    }
    for(i=1;i<=n;i++) cin >> ara[i];
    for(i=0;i<n-1;i++){
        a = ab[i].first;
        b = ab[i].second;
        if(ara[a]!=ara[b]){
            groot(a);
            if(flag){
                cout << "YES\n"<<a;
                return 0;
            }
            groot(b);
            if(flag){
                cout << "YES\n"<<b;
                return 0;
            }
            cout << "NO";
            return 0;
        }
    }
    cout << "YES\n1";
    return 0;
}













