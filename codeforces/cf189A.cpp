#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;
char ara[1005][6];
vector <long long> v;
long long dp[4005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c;
    cin >> n >> a >> b >> c;
    t = 1;
    memset(dp, 0, sizeof dp);
    for(i=1; i<=n; i++){
        if(i>a&&dp[i-a]){
            dp[i] = max(dp[i], dp[i-a]+1);
        }
        if(i>b&&dp[i-b]){
            dp[i] = max(dp[i], dp[i-b]+1);
        }
        if(i>c&&dp[i-c]){
            dp[i] = max(dp[i], dp[i-c]+1);
        }
        if(i==a||i==b||i==c){
            dp[i] = max(dp[i], t);
        }
    }
    cout << dp[n];
    return 0;
}















