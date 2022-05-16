#include <bits/stdc++.h>
using namespace std;
int ara[1005], n, dp[1005][20005], vis[1005][20005], m;

int solve(int i, int sum){
    if(i>n){
        if(sum==10004) return 1;
        return 0;
    }
    if(vis[i][sum]) return dp[i][sum];
    long long ret = 0;
    if(sum==10004) ret++;
    ret += solve(i+1, sum+ara[i]);
    ret%=m;
    ret += solve(i+1, sum-ara[i]);
    ret%=m;
    vis[i][sum] = 1;
    return dp[i][sum] = ret;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int i, j, ans;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    memset(vis, false, sizeof vis);
    m = 1000000007;
    ans = 0;
    for(i=1;i<=n;i++){
        ans += solve(i+1, +ara[i]+10004);
        ans%=m;
        ans += solve(i+1, -ara[i]+10004);
        ans%=m;
    }
    cout << ans;
    return 0;
}
