//prince_of_crows
//buet_mushroom
//revolution_for_redemption

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

string star[200000];
long long ara[200005];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    ans = ara[0];
    temp = min(k, n);
    j = n;
    while(temp*2!=j){
        ans = max(ans, ara[j-1]);
        j--;
        temp--;
    }
    i=0; j--;
    while(i<j){
        ans = max(ans, ara[i]+ara[j]);
        i++;
        j--;
    }
    cout << ans;
    return 0;
}




















