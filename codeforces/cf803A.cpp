//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long dp[105][105];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> k;
    memset(dp, 0, sizeof dp);
    temp = k;
    for(i=0;i<n;i++){
        if(temp==0) break;
        dp[i][i] = 1;
        temp--;

    }
    if(temp%2){
        cout << -1;
        return 0;
    }
    for(i=1;i<n;i++){
        for(j=0;j<n;j++){
            if(temp==0) break;
            if(j==i) break;
            dp[i][j] = 1;
            dp[j][i] = 1;
            temp-=2;
        }
    }
    if(temp!=0){
        cout << -1;
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << dp[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}




















