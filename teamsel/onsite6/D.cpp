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

int main() {
    //freopen("in.txt", "r", stdin);
    int temp, t, j, i, m, h2, m2, c, a, b, mx, d, k, l, n, ans;
    int ara[10005], dec[10005], inc[10005];
    while(cin >> n){
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        vector <int> x;
        for(i=0;i<n;i++){
            j = lower_bound(x.begin(), x.end(), ara[i])-x.begin();
            if(j==x.size()){
                x.push_back(ara[i]);
            }
            else{
                x[j] = ara[i];
            }
            inc[i] = x.size();
        }
        x.clear();
        for(i=n-1;i>=0;i--){
            j = lower_bound(x.begin(), x.end(), ara[i])-x.begin();
            if(j==x.size()){
                x.push_back(ara[i]);
            }
            else{
                x[j] = ara[i];
            }
            dec[i] = x.size();
        }
        ans = 1;
        for(i=0;i<n;i++){
            ans = max(ans, min(inc[i],dec[i])*2-1);
        }
        cout << ans << endl;
    }
    return 0;
}







