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
vector <long long> x;
long long dp[5005][5005], n;

long long subs(long long i, long long k, long long ar[]){
    if(k==0){
        long long j, m, mx;
        m = 0;
        mx = -9999999999999999;
        for(j=0;j<n;j++){
            m = max(ar[j], m+ar[j]);
            mx = max(mx, m);
        }
        return mx;
    }
    if(i>=n) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    long long res1, res2;
    res1 = res2 = -9999999999999999;
    res2 = subs(i+1, k, ar);
    if(ar[i]<0) {
        long long temp = ar[i];
        ar[i] = 0;
        res1 = subs(i+1, k-1, ar);
        ar[i] = temp;
    }
    return dp[i][k] = max(res1, res2);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, ara[5005];
    cin >> t;
    d = 1;
    while(t--){
        cin >> n >> k;
        c = 0;
        for(i=0;i<n;i++){
            cin >> ara[i];
            if(ara[i]<0) c++;
        }
        k = min(c, k);
        memset(dp, -1, sizeof dp);
        printf("Case %lld: %lld\n",d++, subs(0, k, ara));
    }
    return 0;
}






