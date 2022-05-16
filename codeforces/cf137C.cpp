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
vector <long long> x;
vector <long long> g[100005];
set <char> st;
map <long long, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        ab.push_back({a, b});
    }
    sort(ab.begin(), ab.end());
    a = ab[0].first;
    b = ab[0].second;
    ans = 0;
    for(i=1;i<n;i++){
        if(ab[i].first>a&&ab[i].second<b){
            ans++;
        }
        else if(ab[i].second>b){
            a = ab[i].first;
            b = ab[i].second;
        }
    }
    cout << ans;
    return 0;
}















