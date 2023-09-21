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

long long ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans;
    cin >> t;
    while(t--){
        cin >> n >> d;
        a  = 0;
        for(i=0;i<n;i++){
            cin >> ara[i];
            a+=ara[i];
        }
        if(a%n){
            cout << -1 << endl;
            continue;
        }
        a/=n;
        ans = 0;
        for(i=0;i<n-d;i++){
            if(ara[i]>a){
                ans+=(ara[i]-a);
                if(i+d<n) ara[i+d] += (ara[i]-a);
                ara[i] = a;
            }
            else if(ara[i]<a){
                ans+=(a-ara[i]);
                if(i+d<n) ara[i+d] -= (a-ara[i]);
                ara[i] = a;
            }
        }
        for(i=0;i<n;i++){
            if(ara[i]!=a){
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}













