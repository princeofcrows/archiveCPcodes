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

long long ara[100005], ps[100005], sf[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=1;i<=n;i++){
            ara[i] = i;
        }
        for(i=2;i<=n;i+=2){
            swap(ara[i], ara[i-1]);
        }
        if(n%2) swap(ara[n], ara[n-1]);
        for(i=1;i<=n;i++){
            cout << ara[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}













