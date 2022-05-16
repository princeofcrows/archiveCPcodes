//price_of_crows
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
long long ara[100], ara2[100], ara3[100], ara4[100], ara5[100];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;
long long dp[204][204];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    cin >> n;
    for(i=0;i<n-1;i++){
        cin >> ara[i];
    }
    for(i=0;i<n-1;i++){
        cin >> ara2[i];
    }
    for(i=0;i<n;i++){
        cin >> ara5[i];
    }
    ara3[0] = ara4[n-1] = 0;
    for(i=1;i<n;i++){
        ara3[i] = ara3[i-1]+ara[i-1];
    }
    for(i=n-2;i>=0;i--){
        ara4[i] = ara4[i+1]+ara2[i];
    }
    for(i=0;i<n;i++){
        x.push_back(ara3[i]+ara4[i]+ara5[i]);
    }
    sort(x.begin(), x.end());
    ans = x[0]+x[1];
    cout << ans;
    return 0;
}
















