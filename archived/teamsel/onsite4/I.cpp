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
long long int ara[10005], ara2[10005], ara3[10005], n;

void seive(){
    memset(ara, 0, sizeof ara);
    for(long long int i=2;i<=10000;i++){
        if(ara[i]==0){
            x.push_back(i);
            for(long long int j=i;j<=10000;j+=i){
                ara[j] = 1;
            }
        }
    }
}


int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    scanf("%lld", &t);
    seive();
    while(t--){
        scanf("%lld", &n);
        a = 0;
        ara2[0] = 0;
        for(i=1;i<=n;i++){
            scanf("%lld", &ara2[i]);
            if(i==1) l = ara2[i];
            if(ara2[i]<ara2[i-1]){
                a+= ara2[i-1]-ara2[i];
                ara2[i] = ara2[i-1];
            }
            l = __gcd(ara2[i], l);
        }
        if(l!=1){
            printf("%lld\n", a);
            continue;
        }
        ans = 999999999999;
        for(i=0;i<x.size();i++){
            mx = a;
            ara3[0] = 0;
            for(j=1;j<=n;j++){
                c = 1;
                if(ara2[j]%x[i]==0){
                    c = 0;
                }
                b = (ara2[j]/x[i]+c)*x[i]-ara2[j];
                mx += b;
            }
            ans = min(mx, ans);
        }
        printf("%lld\n", ans);
    }
    return 0;
}







