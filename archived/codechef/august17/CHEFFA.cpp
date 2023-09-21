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
long long ara2[100], tot, mod, n, ara3[200];
long long dp[80][105][105][105];

long long coinchange(long long i, long long ara[]){
    if(i>75){
        //for(long long j=1;j<=n+3;j++) cout << ara[j] <<" ";
        //cout << endl;
        return 1;
    }
    if(dp[i][ara[i]][ara[i-1]][ara[i-2]]!=-1) return dp[i][ara[i]][ara[i-1]][ara[i-2]];
    long long ret1, a, b, c, d;
    ret1 = 0;
    a = ara[i-1];
    b = ara[i-2];
    c = ara[i];
    d = min(ara[i-1], ara[i-2]);
    //ret1 += coinchange(i+1, ara);
    for(long long j=0;j<=d;j++){
        ret1 += coinchange(i+1, ara);
        ara[i]++;
        ara[i-1]--;
        ara[i-2]--;
    }
    ara[i] = c;
    ara[i-2] = b;
    ara[i-1] = a;
    return dp[i][ara[i]][ara[i-1]][ara[i-2]] = (ret1)%mod;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, d, ans, ara[200];
    cin >> t;
    mod = 1000000007;
    for(i=3;i<=75;i++){
        ara2[i] = ara2[i-1]+ara2[i-2];
    }
    while(t--){
        memset(ara, 0, sizeof ara);
        memset(dp, -1, sizeof dp);
        cin >> n;
        a = 0;
        for(i=1;i<=n;i++){
            cin >> ara[i];
        }
        cout << coinchange(3, ara) << endl;
    }
    return 0;
}








