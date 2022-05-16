//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

string star[200000], str, str1;
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
long long dp[20205][205], n, p;

long long knapsack(long long i, long long m){
    if(i==n) return 0;
    if(dp[m][i]!=-1) return dp[m][i];
    long long res, res1;
    res = res1 = 0;
    if(m-ara[i]>=0) res = ara2[i] + knapsack(i+1, m-ara[i]);
    res1 = knapsack(i+1, m);
    return dp[m][i] = max(res, res1);
}
long long knapsack2(long long i, long long m){
    if(i==n){
        if(m>2000&&m<=p+200) return 0;
        else return -99999999;
    }
    if(m>p+200) return -9999999;
    if(dp[m][i]!=-1) return dp[m][i];
    long long res, res1, res3;
    res = res1 = res3 = 0;
    res = ara2[i] + knapsack2(i+1, m+ara[i]);
    res1 = knapsack2(i+1, m);
    return dp[m][i] = max(res, res1);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    while(cin >> m >> n){
        for(i=0;i<n;i++){
            cin >> ara[i] >> ara2[i];
        }
        p = m;
        memset(dp, -1, sizeof dp);
        if(m+200>2000){
            ans = knapsack(0, m);
            memset(dp, -1, sizeof dp);
            a = knapsack2(0, 0);
            ans = max(ans, a);
        }
        else ans = knapsack(0, m);
        cout << ans << endl;
    }
    return 0;
}







