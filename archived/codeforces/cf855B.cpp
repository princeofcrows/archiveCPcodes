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
vector <pair <long long, long long> > ab;
vector <int> g;
set <long long> s;
set <long long> s1;
set <long long> s2;
vector <long long> x;
string str, str1;
long long ara[100005];
long long ara2[100005];
long long i2[100005];
long long ara3[100005];
long long i3[100005];
map <string, long long> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> n >> a >> b >> c;
    for(i=0;i<n;i++){
        cin >> j;
        x.push_back(j);
        ara[i] = j*a;
        ara2[i] = j*b;
        ara3[i] = j*c;
    }
    for(i=1;i<n;i++){
        ara[i] = max(ara[i], ara[i-1]);
    }
    for(i=n-2;i>=0;i--){
        ara3[i] = max(ara3[i+1], ara3[i]);
    }
    ans = -4000000000000000000;
    for(i=0;i<n;i++){
        ans = max(ara[i]+ara2[i]+ara3[i], ans);
    }
    cout << ans;
    return 0;
}
