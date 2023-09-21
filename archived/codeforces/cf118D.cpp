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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
map <char, char> dat;
char ch;
long long dp[105][105][15][15], k, l;

long long com(long long n1, long long n2, long long k1, long long k2){
    if((n2==0)&&(n1==0)) return 1;
    if(dp[n1][n2][k1][k2]!=-1) return dp[n1][n2][k1][k2];
    long long res1, res2;
    res1 = res2 = 0;
    if((k1<k)&&(n1>=1))res1 = com(n1-1, n2, k1+1, 0);
    if((k2<l)&&(n2>=1))res2 = com(n1, n2-1, 0, k2+1);
    return dp[n1][n2][k1][k2] = (res1+res2)%100000000;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n >> m >> k >> l;
    memset(dp, -1, sizeof dp);
    cout << com(n, m, 0, 0);
    return 0;
}













