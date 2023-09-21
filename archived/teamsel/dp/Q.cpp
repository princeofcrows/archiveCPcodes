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

long long ara[105][105], dp[1<<14][101], n, m, b, z;
vector < pair <long long, long long> > ab;

long long ts(long long mask, long long atp){
    long long o = 1;
    long long sz = ab.size();
    if(mask==(o<<(sz))-1) return ara[atp][b];
    long long ret = dp[mask][atp];
    long long a, c;
    if(ret!=-1) return ret;
    ret = 9999999999999;
    for(long long i=0;i<sz;i++){
        if(!(mask&(o<<i))){
            a = ab[i].first;
            c = ab[i].second;
            ret = min(ret, ts((mask|(o<<i)), c)+ara[atp][a]+ara[a][c]);
        }
    }
    return dp[mask][atp] = ret;
}


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, mx, d, k, l;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld%lld%lld", &n, &m, &b);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                ara[i][j] = 99999999999999999;
                if(i==j) ara[i][j] = 0;
            }
        }
        for(i=1;i<=m;i++){
            scanf("%lld%lld%lld", &a, &c, &d);
            ara[a][c] = min(ara[a][c], d);
            ara[c][a] = min(ara[c][a], d);
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    ara[j][k] = min(ara[j][k], ara[j][i]+ara[i][k]);
                }
            }
        }
        scanf("%lld", &z);
        ab.clear();
        memset(dp, -1, sizeof dp);
        for(i=0;i<z;i++){
            scanf("%lld%lld%lld", &a, &c, &d);
            for(j=0;j<d;j++){
                ab.push_back({a, c});
            }
        }
        printf("%lld\n", ts(0, b));
    }
    return 0;
}












