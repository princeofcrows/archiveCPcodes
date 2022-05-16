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

string star[100005], str, str1[10005], str2[10005], str3;
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector < pair <long long, long long> > xy;
vector <long long> x;
vector <long long> y;
map <pair<long long, long long>, bool> dat;
vector < vector <long long> > g(405);
vector < vector <long long> > gb(405);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            dat[{i, j}] = true;
            dat[{j, i}] = true;
        }
        ara[i] = ara2[i] = 9999999999;
    }
    for(i=0;i<m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        dat[{a, b}] = false;
        dat[{b, a}] = false;
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(dat[{i, j}]){
                gb[i].push_back(j);
                gb[j].push_back(i);
            }
        }
    }
    ara[1] = ara2[1] = 0;
    queue <long long> q;
    q.push(1);
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(i=0;i<g[a].size();i++){
            if(ara[a]+1<ara[g[a][i]]){
                ara[g[a][i]] = ara[a]+1;
                q.push(g[a][i]);
            }
        }
    }
    q.push(1);
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(i=0;i<gb[a].size();i++){
            if(ara2[a]+1<ara2[gb[a][i]]){
                ara2[gb[a][i]] = ara2[a]+1;
                q.push(gb[a][i]);
            }
        }
    }
    if(ara[n]>=999999999||ara2[n]>=999999999) cout << -1;
    else cout << max(ara[n], ara2[n]);
    return 0;
}













