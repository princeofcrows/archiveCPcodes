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
string star[200000], str, str1, str2;
long long ara[1005], ara2[1005];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, q;
    cin >> n >> a >> b;
    for(i=0;i<n;i++){
        cin >> ara[i] >> ara2[i];
    }
    ans = 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((max(ara[i],ara[j])<=a)&&(ara2[i]+ara2[j])<=b){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
            if((max(ara[i],ara2[j])<=a)&&(ara2[i]+ara[j])<=b){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
            if((max(ara2[i],ara[j])<=a)&&(ara[i]+ara2[j])<=b){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
            if((max(ara2[i],ara2[j])<=a)&&(ara[i]+ara[j])<=b){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
            if((max(ara[i],ara[j])<=b)&&(ara2[i]+ara2[j])<=a){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
            if((max(ara[i],ara2[j])<=b)&&(ara2[i]+ara[j])<=a){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
            if((max(ara2[i],ara[j])<=b)&&(ara[i]+ara2[j])<=a){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
            if((max(ara2[i],ara2[j])<=b)&&(ara[i]+ara[j])<=a){
                mx = ara[i]*ara2[i]+ara[j]*ara2[j];
                ans = max(ans, mx);
            }
        }
    }
    cout << ans;
    return 0;
}













