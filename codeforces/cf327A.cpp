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
vector <long long> v;
long long ara[4005];
long long dp[4005];
long long dp2[4005];

int main() {
    freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k, mx;
    cin >> n;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
        if(ara[i]){
            ans++;
        }
    }
    dp[0] = 0;
    for(i=0;i<n;i++){
        if(ara[i]){
            dp[i+1] = dp[i]+1;
        }
        else{
            dp[i+1] = dp[i];
        }
    }
    dp2[n] = 0;
    for(i=n-1;i>=0;i--){
        if(ara[i]){
            dp2[i] = dp2[i+1]+1;
        }
        else{
            dp2[i] = dp2[i+1];
        }
    }
    mx = 0;
    for(i=0;i<n;i++){
        for(j=n-1;j>=i;j--){
            temp = dp[i]+dp2[j+1];
            for(k=i;k<=j;k++){
                if(!ara[k])temp++;
            }
            if(temp>mx){
                 mx = temp;
                //cout <<i <<" "<<j<<" "<<dp[i]<<" "<<dp2[j]<<endl;
            }
        }
    }
    cout << mx;

    return 0;
}















