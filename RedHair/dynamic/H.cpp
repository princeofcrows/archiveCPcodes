#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k, m;
ll ara[1005], pr[1005];
ll dp[1005][105][3];

ll rec(ll i, ll rem, bool c){
    if((!rem)&&(c)){
        if(i==n) return 1;
        return (pr[n-i-1]*(9%m))%m;
    }
    if(i==n) return 0;
    if(dp[i][rem][c]!=-1) return dp[i][rem][c];
    ll j, ans;
    ans = 0;
    for(j=0;j<=9;j++){
        int remt = rem;
        remt += (j%k)*ara[i];
        remt %= k;
        ans+= rec(i+1, remt, (bool)(j||c));
        ans %= m;
    }
    return dp[i][rem][c] = ans;
}

int main(){
    //freopen("in.txt", "r", stdin);
    cin >> n >> k >> m;
    memset(dp, -1, sizeof dp);
    ll a = 1;
    for(int i=0;i<=n;i++){
        ara[i] = a;
        a*=10;
        a %= k;
    }
    a = 1;
    for(ll i=0;i<=n;i++){
        pr[i] = a;
        a*=10;
        a %= m;
    }
    cout << rec(0, 0, 0)%m;
    return 0;
}









