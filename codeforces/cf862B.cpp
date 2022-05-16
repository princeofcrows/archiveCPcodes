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
set <long long> s1;
set <long long> s2;
string str, str1;
long long ara[100005];
long long ara2[100005];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> n;
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<n-1;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        ara2[a]++;
        ara2[b]++;
    }
    queue <long long> q;
    c = 1;
    memset(ara, -1, sizeof ara);
    ara[c] = 0;
    q.push(c);
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(i=0;i<g[a].size();i++){
            if(ara[g[a][i]]==-1){
                ara[g[a][i]] = ara[a]^c;
                q.push(g[a][i]);
            }
        }
    }
    ans = 0;
    b = 0;
    for(i=1;i<=n;i++){
        if(ara[i]==0){
            b++;
            //cout << i <<": ";
        }
    }
    for(i=1;i<=n;i++){
        if(ara[i]==1){
             ans += (b-ara2[i]);
             //cout << i << " " << ara2[i] << " " << endl;
        }
    }
    cout << ans;
    return 0;
}





















