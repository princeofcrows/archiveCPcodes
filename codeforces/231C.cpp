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
long long ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i, j, ans, a, b, k, l, h, n, m, c;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> a;
        x.push_back(a);
    }
    sort(x.begin(), x.end());
    ara[0] = 0;
    for(i=1;i<=n;i++){
        ara[i] = ara[i-1]+x[i-1];
    }
    ans = c = 0;
    for(i=1;i<=n;i++){
        l = 1;
        h = i;
        while(l<h){
            //printf("%lld %lld\n", l, h);
            m = (l+h)/2;
            b = x[i-1]*(i-m+1) - ara[i] + ara[m-1];
            if(b<=k) l = m+1;
            else h = m-1;
        }
        for(j=max(1LL, l-10);j<=min(i, l+10);j++){
            b = x[i-1]*(i-j+1) - ara[i] + ara[j-1];
            if(b<=k){
                break;
            }
        }
        if(i-j+1>c){
            c = i-j+1;
            ans = x[i-1];
        }
    }
    cout << c << " " << ans;
    return 0;
}







