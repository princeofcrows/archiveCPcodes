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
vector < pair <long long, long long> > ab;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
        if(ara[i]>0)ans += ara[i];
        else ans -= ara[i];
    }
    cout << ans <<endl;
    //cout << ans<<" ";
    a = 0;
    for(i=0;i<n;i++){
        if(ara[i]>=0){
            break;
        }
    }
    if(i)cout << i <<" ";
    for(i=i;i<n;i++){
        if(ara[i]<0){
            if(a==0) b = i;
            a+=ara[i];
        }
        else if(a!=0){
            ab.push_back({b, i});
            a = 0;
        }
    }
    if(a!=0){
        ab.push_back({b, i});
    }
    for(i=0;i<ab.size();i++){
        cout << ab[i].first <<" "<<ab[i].second<<" ";
    }
    return 0;
}













