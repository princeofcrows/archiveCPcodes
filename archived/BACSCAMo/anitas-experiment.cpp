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
long long ara[10005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    while(t--){
        cin >> n;
        x.clear();
        for(i=0;i<n;i++) cin >> ara[i];
        c = 1;
        for(i=1;i<n;i++){
            if(ara[i]==ara[i-1]){
                c++;
            }
            else{
                break;
            }
        }
        if(c==n){
            cout << "neutral\n";
            continue;
        }
        a = 1;
        for(i=1;i<n;i++){
            if(ara[i]>=ara[i-1]){
                a++;
            }
            else{
                break;
            }
        }
        if(a == n){
            cout << "allGoodDays\n";
            continue;
        }
        a = 1;
        for(i=1;i<n;i++){
            if(ara[i]<=ara[i-1]){
                a++;
            }
            else{
                break;
            }
        }
        if(a == n){
            cout << "allBadDays\n";
            continue;
        }
        for(i=1;i<n-1;i++){
            if((ara[i]>ara[i-1])&&(ara[i]>ara[i+1])){
                x.push_back(i);
            }
        }
        if(x.size()<2){
            cout << "none\n";
            continue;
        }
        ans = 0;
        for(i=1;i<x.size();i++){
            ans = max(ans, x[i]-x[i-1]);
        }
        cout << ans-1 << endl;
    }
    return 0;
}













