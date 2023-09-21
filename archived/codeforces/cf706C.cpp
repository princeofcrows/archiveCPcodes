//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000], rstar[200000];

long long ara[200005], ara2[200005], ara3[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long dp[100005][4];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    for(i=0;i<n;i++){
        cin >> star[i];
        rstar[i] = star[i];
        reverse(rstar[i].begin(), rstar[i].end());
    }
    dp[0][0] = 0;
    dp[0][1] = ara[0];
    for(i=1;i<n;i++){
        dp[i][0] = dp[i][1] = 9999999999999999;
        if(star[i]>=star[i-1]){
            dp[i][0] = min(dp[i-1][0], dp[i][0]);
        }
        if(star[i]>=rstar[i-1]){
            dp[i][0] = min(dp[i-1][1], dp[i][0]);
        }
        if(rstar[i]>=star[i-1]){
            dp[i][1] = min(dp[i-1][0], dp[i][1]);
        }
        if(rstar[i]>=rstar[i-1]){
            dp[i][1] = min(dp[i-1][1], dp[i][1]);
        }
        dp[i][1]+=ara[i];
    }
    ans = min(dp[n-1][0], dp[n-1][1]);
    if(ans==9999999999999999) cout << -1;
    else cout << ans;
    return 0;
}




















