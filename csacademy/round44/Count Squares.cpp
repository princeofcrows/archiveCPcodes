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
long long ara[100005], mod;
bool vis[100005];
map <long long, long long> dat;
vector <long long> y;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    mod = 1000000007;
    cin >> n >> m;
    if(n<m)swap(n, m);
    ans = (m*(m+1)*(2*m+1)/6)%mod + ((n-m)*m*(m+1)/2)%mod;
    a = m*(m-1)*(m+1);
    c = 12;
    b = __gcd(a, c);
    a/=b;
    c/=b;
    c = (2*n-m)/c;
    a = (a%mod)*(c%mod);
    cout << (ans+a)%mod;
    return 0;
}













