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
string star[200000], str, str1, str2;
long long ara[1005], ara2[1005], ara5[1000];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
long long dp[205][205][205];
long long n;

long long knapsack(long long i, long long a2, long long a5, long long k){
    if(k==0){
        return min(a2, a5);
    }
    if(i>=n) return -99999999;
    if(dp[i][a2][a5]!=-1) return dp[i][a2][a5];
    return dp[i][a2][a5] = max(knapsack(i+1, a2+ara2[i], a5+ara5[i], k-1), knapsack(i+1, a2, a5, k));
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, c, a, b, mx, d, k, l, q;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> ara[i];
        ara2[i] = ara5[i] = 0;
        temp = ara[i];
        while(temp){
            if(temp%2) break;
            ara2[i]++;
            temp/=2;
        }
        while(temp){
            if(temp%5) break;
            ara5[i]++;
            temp/=5;
        }
    }
    memset(dp, -1, sizeof dp);
    cout << knapsack(0, 0, 0, k);
    return 0;
}
