#include <bits/stdc++.h>
using namespace std;

string str1, str2;
int dp[1005][1005];

int lcs(int i, int j, int k){
    if(i>=str1.length()||j>=str2.length()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int c = 1;
    int l;
    for(l=0;l<k;l++){
        if(i+l>=str1.length()||j+l>=str2.length()){
            c = 0;
            return 0;
            break;
        }
        if(str1[i+l]!=str2[j+l]){
            c = 0;
            break;
        }
    }
    int ans = 0;
    if(c){
        for(l=k;;l++){
            ans = max(l+lcs(i+l, j+l, k), ans);
            if(i+l>=str1.length()||j+l>=str2.length()){
                break;
            }
            if(str1[i+l]!=str2[j+l]){
                break;
            }
        }
    }
    ans = max(max(lcs(i+1, j, k), lcs(i, j+1, k)), ans);
    return dp[i][j] = ans;
}

int main(){
    //freopen("in.txt", "r", stdin);
    int i, j, n;
    while(cin >> n){
        if(n==0) break;
        cin >> str1 >> str2;
        memset(dp, -1, sizeof dp);
        cout << lcs(0, 0, n) << endl;
    }
    return 0;
}
