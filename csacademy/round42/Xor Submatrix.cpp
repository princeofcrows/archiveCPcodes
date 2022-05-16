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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
string str, sa, sb;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, d, ans, n, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
        ab.push_back({ara[i], i+1});
    }
    sort(ab.begin(), ab.end());
    ans = 1;
    for(i=0;i<n;i++){
        ans = max(ans, ab[i].second-i);
    }
    cout << ans;
    return 0;
}













