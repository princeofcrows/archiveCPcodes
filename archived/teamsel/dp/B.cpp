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
long long ara[105][105], dp[5][105], n, m;
vector < pair <long long, long long> > ab;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> k;
    memset(dp, 0, sizeof dp);
    dp[1][1] = k-1;
    dp[2][1] = k-1;
    for(i=2;i<=n;i++){
        dp[1][i] = dp[2][i-1]*(k-1);
        dp[0][i] = dp[2][i-1];
        if(i>2){
            dp[0][i] -= dp[1][i-2];
        }
        dp[2][i] = dp[1][i]+dp[0][i];
    }
    cout << dp[2][n];
    return 0;
}












