#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;
long long int cnt[100010], dp[100010];
int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp;
    cin >> n;
    memset(cnt, 0, sizeof cnt);
    for(int i=0;i<n;i++){
        cin >> temp;
        cnt[temp]+=temp;
    }
    dp[0] = cnt[0];
    dp[1] = cnt[1];
    for(int i=2;i<100010;i++){
        dp[i] = max(dp[i-1], dp[i-2]+cnt[i]);
    }
    cout << dp[100010-1];
    return 0;
}






