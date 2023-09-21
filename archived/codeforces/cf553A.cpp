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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
map <char, char> dat;
char ch;
long long dp[1005][1005], k, l;


int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> k;
    memset(dp, 0, sizeof dp);
    m = 1000000007;
    for(i=0;i<=1001;i++) dp[i][0] = 1;
    for(i=1;i<=1001;i++){
        for(j=1;j<=i;j++){
            dp[i][j] = (dp[i-1][j-1]+dp[n-1][j])%m;
        }
    }
    b = 0;
    for(i=0;i<k;i++){
        cin >> ara[i];
        b+=ara[i];
    }
    ans = 1;
    a = ara[0]+ara[1]-1;
    for(i=1;i<=b;i++){
        a+=ara[i];
        ans*=();
        ans%=m;
    }
    cout << ans;
    return 0;
}













