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
long long ara[100005], fs[100005], bs[100005];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, i, ans;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
        if(i) fs[i] = fs[i-1]+ara[i];
        else fs[i] = ara[i];
    }
    for(i=n-1;i>=0;i--){
        if(i!=n-1) bs[i] = bs[i+1]+ara[i];
        else bs[i] = ara[i];
    }
    ans = 0;
    for(i=1;i<n;i++){
        if(fs[i-1]==bs[i]){
            ans++;
        }
    }
    cout << ans;
    return 0;
}







