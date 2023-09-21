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
long long ara[100005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, r;
    cin >> n >> a;
    cin >> str;
    a--;
    b = n - 1;
    ans = 0;
    memset(ara, 0, sizeof ara);
    for(i=0;i<=((n-1)/2);i++){
        ans += min(abs(str[i]-str[b]), (26-abs(str[i]-str[b])));
        if(str[i]!=str[b]) ara[i] = 1;
        if(a==b) a = i;
        b--;
    }
    c = 0;
    for(i=0;i<=a;i++){
        if(ara[i]) c = max(c, abs(a-i));
    }
    d = 0;
    for(i=a+1;i<=(n-1)/2;i++){
        if(ara[i]) d = max(d, abs(a-i));
    }
    ans += ((c+d)+min(c,d));
    cout << ans;
    return 0;
}














