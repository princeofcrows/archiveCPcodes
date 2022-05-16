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
long long ara[1000005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
long long dp[505][505];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, e, v;
    cin >> n >> m;
    memset(ara, 0, sizeof ara);
    for(i=2;i<=1000000;i++){
        if(!ara[i]){
            x.push_back(i);
            for(j=i+i;j<=1000000;j+=i){
                ara[j] = 1;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> dp[i][j];
        }
    }
    ans = 9999999999;
    for(i=0;i<n;i++){
        a = 0;
        for(j=0;j<m;j++){
            l = lower_bound(x.begin(), x.end(), dp[i][j])-x.begin();
            a += (x[l]-dp[i][j]);
        }
        ans = min(a, ans);
    }
    for(i=0;i<m;i++){
        a = 0;
        for(j=0;j<n;j++){
            l = lower_bound(x.begin(), x.end(), dp[j][i])-x.begin();
            a += (x[l]-dp[j][i]);
        }
        ans = min(a, ans);
    }
    cout << ans;
    return 0;
}













