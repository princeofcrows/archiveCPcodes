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

string str;
long long ara[1005], dp[1005][1005][3], x, y, n, m;

long long dpr(long long i, long long a, long long b){
    if(i==m){
        if(!a) return 0;
        else if((a>=x)&&(a<=y)) return 0;
        else return 11111151312391;
    }
    if(dp[i][a][b]!=-1) return dp[i][a][b];
    long long ret, h, d;
    h = n-ara[i];
    d = ara[i];
    if(b==0){
        if(a<x) ret = dpr(i+1, a+1, b)+d;
        else{
            if(a+1>y) ret = dpr(i+1, 1, 1-b)+h;
            else{
                ret = min(dpr(i+1, a+1, b)+d, dpr(i+1, 1, 1-b)+h);
            }
        }
    }
    else{
        if(a<x) ret = dpr(i+1, a+1, b)+h;
        else{
            if(a==y) ret = dpr(i+1, 1, 1-b)+d;
            else{
                ret = min(dpr(i+1, a+1, b)+h, dpr(i+1, 1, 1-b)+d);
            }
        }
    }
    return dp[i][a][b] = ret;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long ans, temp, t, j, i, h, h2, mn, c, a, b, mx, d, k, l, f;
    cin >> n >> m >> x >> y;
    memset(ara, 0, sizeof ara);
    for(i=1;i<=n;i++){
        cin >> str;
        c = 0;
        for(j=0;j<m;j++){
            if(str[j]=='.') ara[j]++;
        }
    }
    memset(dp, -1, sizeof dp);
    a = dpr(0, 0, 0);
    memset(dp, -1, sizeof dp);
    b = dpr(0, 0, 1);
    cout << min(a, b);
    return 0;
}







