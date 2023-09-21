#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

long long dp[105][2];
#define mod 1000000007

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, b, n, k, d, j;
    cin >> n >> k >> d;
    memset(dp, 0, sizeof dp);
    dp[0][0] = 1;
    for(i=1;i<=n; i++){
        dp[i][0] = dp[i][1] = 0;
        for(j=1;j<=k;j++){
            if(i-j<0) break;
            if(j<d){
                dp[i][0] = (dp[i][0]+dp[i-j][0])%mod;
                dp[i][1] = (dp[i][1]+dp[i-j][1])%mod;
            }
            else{
                //dp[i][0] = (dp[i][0]+dp[i-j][0])%mod;
                dp[i][1] = (dp[i][1]+dp[i-j][1]+dp[i-j][0])%mod;
            }
        }
    }
    cout << dp[n][1];
    return 0;
}
