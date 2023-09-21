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
long long ara[505][505], ara2[505][505], ara3[505], vis[505], res[505];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
stack <long long> stk;
vector <long long> g[100005];
vector <long long> rg[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, mn, c, a, b, mx, d, k, l, f;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin >> ara[i][j];
        }
    }
    for(i=1;i<=n;i++){
        cin >> ara3[i];
    }
    memset(vis, false, sizeof vis);
    ans = 0;
    for(i=n;i>=1;i--){
        a = ara3[i];
        vis[a] = true;
        ans = 0;
        for(j=1;j<=n;j++){
            for(l=1;l<=n;l++){
                ara[j][l] = min(ara[j][a]+ara[a][l], ara[j][l]);
            }
        }
        for(j=1;j<=n;j++){
            if(!vis[j]) continue;
            for(l=1;l<=n;l++){
                if(!vis[l]) continue;
                ans += ara[j][l];
            }
        }
        res[i] = ans;
    }
    for(i=1;i<=n;i++){
        cout << res[i] << " ";
    }
    return 0;
}







