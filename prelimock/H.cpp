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
string str, str1;
long long ara[100005];
long long ara2[100005];

long long bigmod(long long a, long long b, long long m){
    if(b==0) return 1%m;
    long long x = bigmod(a, b/2, m);
    x = (x%m);
    x = (x*x)%m;
    if(b%2==1) x = (x*a)%m;
    return x;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> t;
    d = 1;
    while(t--){
        cin >> n >> k >> m;
        ara[1] = (k*k)%m;
        ara[2] = (k*k*k)%m;
        for(i=3;i<=n;i++){
            ara[i] = ara[i-1]*ara[i-2];
            ara[i] %= m;
        }
        a = ara[n]%m;
        cout << "Case "<<d++<<": "<<a <<endl;
    }
    return 0;
}





















