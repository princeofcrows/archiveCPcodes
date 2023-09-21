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

long long ara[5005], dp[55][55][55][55], n, m, b, z, k;
vector < pair <long long, long long> > ab;

long long knapsack(long long i, long long ans, long long a, long long j, long long l, long long r){
    if(i>n){
        if(j==k){
            //cout << i <<" "<<j<<endl;
            return ans+a;
        }
        else{
            return -99999999999999;
        }
    }
    if(dp[i][j][l][r]!=-1) return dp[i][j][l][r];
    long long ret;
    a|=ara[i];
    ret = max(knapsack(i+1, ans, a, j, l, i+1), knapsack(i+1, ans+a, 0, j+1, i+1, i+1));
    return dp[i][j][l][r] = ret;
}


int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, mx, d, l;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld%lld", &n, &k);
        for(i=1;i<=n;i++){
            scanf("%lld", &ara[i]);
        }
        memset(dp, -1, sizeof dp);
        printf("%lld\n", knapsack(1, 0, 0, 1, 1, 1));
    }
    return 0;
}












