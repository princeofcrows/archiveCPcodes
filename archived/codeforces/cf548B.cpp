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
long long ara[505];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <string, long long> dat;
long long dp[504][504];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> n >> m >> l;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> dp[i][j];
        }
    }
    for(i=1;i<=n;i++){
        ans = mx = 0;
        for(j=1;j<=m;j++){
            if(dp[i][j]) ans++;
            else ans = 0;
            mx = max(ans, mx);
        }
        ara[i] = mx;
    }

    h = 0;
    for(i=1;i<=n;i++){
        h = max(h, ara[i]);
    }

    while(l--){
        cin >> a >> b;
        dp[a][b]^=1;
        mx = ans = 0;
        for(j=1;j<=m;j++){
            if(dp[a][j]) ans++;
            else ans = 0;
            mx = max(ans, mx);
        }
        ara[a] = mx;
        h = 0;
        for(i=1;i<=n;i++){
            h = max(h, ara[i]);
        }
        cout << h << endl;
    }
    return 0;
}
















