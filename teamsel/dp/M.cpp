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
long long ara[105][105], dp[105][105], n, m;
vector < pair <long long, long long> > ab;
vector <string> dat;

long long rockclimbing(long long i, long long j){
    if(i>=0&&i<n&&j>=0&&j<m){
        if(dp[i][j]!=-1) return dp[i][j];
        long long ret = -99999999999999;
        ret = max(ret, rockclimbing(i+1, j)+ara[i][j]);
        ret = max(ret, rockclimbing(i+1, j+1)+ara[i][j]);
        ret = max(ret, rockclimbing(i+1, j-1)+ara[i][j]);
        return dp[i][j] = ret;
    }
    else return 0;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> ara[i][j];
            }
        }
        memset(dp, -1, sizeof dp);
        ans = 0;
        for(i=0;i<m;i++){
            ans = max(ans, rockclimbing(0, i));
        }
        cout << ans <<endl;
    }
    return 0;
}







