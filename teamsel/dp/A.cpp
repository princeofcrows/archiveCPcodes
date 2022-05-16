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

long long ara[25], dp[1<<21][5], n, m, b, z;
bool vis[5];
vector < pair <long long, long long> > ab;

void knapsack(long long mask, long long arm, long long a){
    long long o = 1;
    if(dp[mask][arm]!=-1) return;
    dp[mask][arm] = 1;
    if(a==b){
        vis[arm] = true;
        if(arm==4) return;
        knapsack(mask, arm+1, 0);
    }
    for(long long i=0;i<n;i++){
        if(!(mask&(o<<i))){
            if(ara[i]+a<=b) knapsack((mask|(o<<i)), arm, a+ara[i]);
        }
    }

}


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, mx, d, k, l;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &n);
        a = 0;
        for(i=0;i<n;i++){
            scanf("%lld", &ara[i]);
            a+=ara[i];
        }
        if(a%4){
            printf("no\n");
        }
        else{
            b = a/4;
            memset(vis, false, sizeof vis);
            memset(dp, -1, sizeof dp);
            knapsack(0, 0, 0);
            if(vis[0]&&vis[1]&&vis[2]&&vis[3]){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
    }
    return 0;
}












