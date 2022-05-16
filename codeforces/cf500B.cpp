//prince_of_crows
//buet_mushroom
//revolution_for_redemption

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

string star[200000];

long long ara[200005];

vector < vector <long long> > graph(305);
bool vis[305], pervis[305];

long long pos;

void dfs(long long i){
    if(pervis[i]) return;
    if(!vis[ara[i]]){
        pos = min(pos, ara[i]);
    }
    pervis[i] = true;
    for(long long j=0;j<graph[i].size();j++){
        dfs(graph[i][j]);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<n;i++){
        cin >> star[i];
        for(j=0;j<n;j++){
            if(star[i][j]=='1') graph[i].push_back(j);
        }
    }
    memset(vis, false, sizeof vis);
    for(i=0;i<n;i++){
        memset(pervis, false, sizeof pervis);
        pos = n;
        dfs(i);
        vis[pos] = true;
        cout << pos <<" ";
    }
    return 0;
}




















