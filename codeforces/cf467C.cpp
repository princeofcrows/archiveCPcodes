//prince_of_crows
//buet_mushroom
//revolution_for_redemption

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

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

long long dp[5001][5001];

long long dyn(long long k, long long i, long long m){
    if(k==0) return 0;
    if(i>=x.size()) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    return dp[i][k] = max(dyn(k-1, i+m, m)+x[i], dyn(k, i+1, m));
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans,k;
    cin >> n >> m >> k;
    a = 1;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    ara2[0] = 0;
    for(i=0;i<n;i++){
        ara2[i+1] = ara[i]+ara2[i];
    }
    for(i=0;i+m<=n;i++){
        x.push_back(ara2[i+m]-ara2[i]);
    }
    memset(dp, -1, sizeof dp);
    cout << dyn(k, 0, m);
    return 0;
}
