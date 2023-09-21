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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    for(i=1;i<=m;i++){
        cin >> ara2[i];
    }
    ans = 0;
    for(i=1;i<=m;i++){
        map <long long, long long> dat;
        for(j=i-1;j>=1;j--){
            if(ara2[j]==ara2[i]) break;
            if(!dat[ara2[j]]){
                dat[ara2[j]] = 1;
                ans += ara[ara2[j]];
            }
        }
    }
    cout << ans;
    return 0;
}













