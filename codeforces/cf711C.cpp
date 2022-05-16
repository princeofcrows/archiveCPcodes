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
long long ara[200005], n, m, k;
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
long long col[105][105], dp[105][105][105];

long long mincol(long long i, long long j, long long l){
    if(i==n+1){
        if(l==k) return 0;
        else return 9999999999999999;
    }
    if(dp[i][j][l]!=-1) return dp[i][j][l];
    long long ans = 9999999999999999;
    if(ara[i]!=0){
        if(ara[i]!=j) ans = mincol(i+1, ara[i], l+1);
        else ans = mincol(i+1, ara[i], l);
    }
    else{
        for(long long a=1; a<=m; a++){
            if(a!=j) ans = min(ans, mincol(i+1, a, l+1)+col[i][a]);
            else ans = min(ans, mincol(i+1, a, l)+col[i][a]);
        }
    }
    return dp[i][j][l] = ans;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, l;
    cin >> n >> m >> k;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> col[i][j];
        }
    }
    memset(dp, -1, sizeof dp);
    ans = mincol(1, 0, 0);
    if(ans>=9999999999999999) cout << -1;
    else cout << ans;
    return 0;
}







