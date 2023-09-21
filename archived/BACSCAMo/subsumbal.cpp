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
vector <long long> x;
long long dp[5005][5005], n;

long long subs(long long i, long long k, long long ar[]){
    if(k==0||i==n){
        long long j, m, mx;
        m = 0;
        mx = -9999999999999999;
        for(j=0;j<n;j++){
            m = max(ar[j], m+ar[j]);
            mx = max(mx, m);
        }
        return dp[i][k] = max(mx, dp[i][k]);
    }
    if(dp[i][k]!=-1) return dp[i][k];
    long long res1, res2;
    res1 = res2 = 0;
    res2 = subs(i+1, k, ar);
    if(ar[i]<0) {
        long long temp = ar[i];
        ar[i] = 0;
        res1 = subs(i+1, k-1, ar);
        ar[i] = temp;
    }
    return dp[i][k] = max(dp[i][k], max(res1, res2));
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, ara[5005];
    cin >> t;
    d = 1;
    while(t--){
        cin >> n >> k;
        ans = -9999999999999999;
        for(i=0;i<n;i++){
            cin >> ara[i];
            ans = max(ara[i], ans);
        }
        for(a=0;a<n;a++){
            for(b=a;b<n;b++){
                x.clear();
                for(c=a;c<=b;c++){
                    x.push_back(ara[c]);
                }
                sort(x.begin(), x.end());
                for(i=0;i<k;i++){
                    if(i>=x.size()) break;
                    if(x[i]>0) break;
                    x[i] = 0;
                }
                m = 0;
                for(i=0;i<x.size();i++){
                    m+=x[i];
                }
                ans = max(ans, m);
            }
        }
        printf("Case %lld: %lld\n",d++, ans);
    }
    return 0;
}






