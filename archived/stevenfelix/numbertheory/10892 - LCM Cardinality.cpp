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
long long ara[20000006];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, mn;
    while(scanf("%lld", &n)){
        if(n==0) break;
        ans = 0;
        c = 0;
        for(i=1;i*i<=n;i++){
            if(n%i==0){
                if(i!=n/i){
                    ara[c++] = i;
                    ara[c++] = n/i;
                }
                else ara[c++] = i;
            }
        }
        for(i=0;i<c;i++){
            for(j=i;j<c;j++){
                if(ara[i]*ara[j]/__gcd(ara[i], ara[j])==n) ans++;
            }
        }
        printf("%lld %lld\n", n, ans);
    }
    return 0;
}















