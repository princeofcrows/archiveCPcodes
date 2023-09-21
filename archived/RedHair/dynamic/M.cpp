#include <bits/stdc++.h>
using namespace std;

#define int long long
#define inf 99999999999

string str, str1, str2;
int ara[30][30], n;
int dp[105][105][30];

int solve(int i, int k, int l){
    if(i>=str.length()) return 0;
    if(k<=0){
        int ret2 = ara[l][str[i]-'a'];
        for(int j=i+1;j<str.length();j++){
            ret2+=ara[str[j-1]-'a'][str[j]-'a'];
        }
        return ret2;
    }
    if(dp[i][k][l]!=-inf) return dp[i][k][l];
    int ret = -inf;
    for(int j=0;j<26;j++){
        if(str[i]-'a'==j){
            ret = max(ret, solve(i+1, k, j)+ara[l][j]);
        }
        else{
            ret = max(ret, solve(i+1, k-1, j)+ara[l][j]);
        }
    }
    return dp[i][k][l] = ret;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int k;
    cin >> str >> k;
    cin >> n;
    memset(ara, 0, sizeof ara);
    for(int i=0;i<n;i++){
        int a;
        cin >> str1 >> str2 >> a;
        ara[str1[0]-'a'][str2[0]-'a'] = a;
    }
    for(int i=0;i<=101;i++){
        for(int j=0;j<=101;j++){
            for(int l=0;l<=28;l++) {
                dp[i][j][l] = -inf;
            }
        }
    }
    cout << solve(0, k, 27);
    return 0;
}















