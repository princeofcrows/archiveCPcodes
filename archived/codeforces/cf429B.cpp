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
long long ara[1005][1005], dp1[1005][1005], dp2[1005][1005], dp3[1005][1005], dp4[1005][1005], n, m;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i, j, ans, a, b;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> ara[i][j];
        }
    }
    memset(dp1, 0, sizeof dp1);
    memset(dp2, 0, sizeof dp2);
    memset(dp3, 0, sizeof dp3);
    memset(dp4, 0, sizeof dp4);
    ans = 0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            dp1[i][j] = ara[i][j] + max(dp1[i-1][j], dp1[i][j-1]);
        }
    }
    for(i=n;i>=1;i--){
        for(j=m;j>=1;j--){
            dp2[i][j] = ara[i][j] + max(dp2[i+1][j], dp2[i][j+1]);
        }
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=m;j++){
            dp3[i][j] = ara[i][j] + max(dp3[i+1][j], dp3[i][j-1]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=m;j>=1;j--){
            dp4[i][j] = ara[i][j] + max(dp4[i-1][j], dp4[i][j+1]);
        }
    }
    for(i=2;i<n;i++){
        for(j=2;j<m;j++){
            a = dp1[i][j-1]+dp2[i][j+1]+dp3[i+1][j]+dp4[i-1][j];
            b = dp1[i-1][j]+dp2[i+1][j]+dp3[i][j-1]+dp4[i][j+1];
            ans = max(ans, max(a, b));
        }
    }
    cout << ans;
    return 0;
}







