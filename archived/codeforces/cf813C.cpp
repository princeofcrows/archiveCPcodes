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
long long ara[200005], ara2[200005], ara3[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
vector < vector <long long> > graph(200005);
bool vis[200005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(i=1;i<=n;i++){
        ara[i] = 9999999999999999;
        ara2[i] = 9999999999999999;
    }
    queue <long long> q;
    q.push(1);
    ara[1] = 0;
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(j=0;j<graph[a].size();j++){
            if(!vis[graph[a][j]]&&(ara[graph[a][j]]>ara[a]+1)){
                ara[graph[a][j]] = ara[a]+1;
                q.push(graph[a][j]);
            }
        }
    }
    q.push(m);
    ara2[m] = 0;
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(j=0;j<graph[a].size();j++){
            if(!vis[graph[a][j]]&&(ara2[graph[a][j]]>ara2[a]+1)){
                ara2[graph[a][j]] = ara2[a]+1;
                q.push(graph[a][j]);
            }
        }
    }
    mx = 0;
    for(i=1;i<=n;i++){
        if(ara2[i]<=ara[i]) mx = max(mx, ara[i]);
    }
    cout << 2*mx;
    return 0;
}







