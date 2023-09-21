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
long long dp[105][105][105], n, m, a, b, c;
vector < pair <long long, long long> > ab;
vector <string> dat;

long long com(long long i, long long r, long long u){
    if(i>c){
        if(r==0) return 1;
        else return 0;
    }
    if(dp[i][r][u]!=-1)return dp[i][r][u];
    long long ret = 0;
    if(r>0) ret+=com(i+1, r-1, u+1)*r;
    if(u>b) ret+=com(i+1, r, u)*(u-b);
    return dp[i][r][u] = ret%m;

}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, mx, d, k, l;
    cin >> a >> b >> c;
    m = 100003;
    memset(dp, -1, sizeof dp);
    cout << com(1, a, 0);
    return 0;
}












