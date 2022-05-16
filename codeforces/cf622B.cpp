//prince_of_crows
//buet_mushroom
//revolution_for_redemption

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

string star[200000], str;
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str;
    a = (str[0]-'0')*10+(str[1]-'0');
    b = (str[3]-'0')*10+(str[4]-'0');
    cin >> c;
    h = c/60;
    m = c%60;
    a += h;
    b += m;
    a += b/60;
    b %= 60;
    a %= 24;
    if(a/10==0) str="0";
    else str = "";
    cout << str << a <<":";
    if(b/10==0) str="0";
    else str = "";
    cout << str<<b;
    return 0;
}




















