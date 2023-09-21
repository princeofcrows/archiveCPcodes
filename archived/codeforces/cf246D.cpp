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
set <long long> s[100005];
long long ara[100005];
long long ara2[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    for(i=1;i<=m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(i=1;i<=n;i++){
        for(j=0;j<g[i].size();j++){
            if(ara[g[i][j]]!=ara[i]){
                s[ara[i]].insert(ara[g[i][j]]);
            }
        }
        if(s[ara[i]].size()>mx){
            mx = s[ara[i]].size();
            ans = ara[i];
        }
    }
    mx = 0;
    ans = 99999999999999;
    for(i=1;i<=n;i++){
        if(s[ara[i]].size()>mx){
            mx = s[ara[i]].size();
            ans = ara[i];
        }
        if(s[ara[i]].size()==mx&&ara[i]<ans){
            mx = s[ara[i]].size();
            ans = ara[i];
        }
    }
    cout << ans;
    return 0;
}





















