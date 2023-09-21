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
long long ara[200005], ara2[200005], ara3[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

long long Set(long long int N, long long int pos){return N=N | (1LL<<pos);}
long long reset(long long N,long long pos){return N= N & ~(1LL<<pos);}
bool check(long long N, long long pos){return (bool)(N & (1LL<<pos));}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f, r;
    cin >> l >> r;
    c = ans = 0;
    d = r-l;
    b = 2;
    b = 1;
    while(d>=b){
        ans+=b;
        b*=2;
        c++;
    }
    while(b<=r){
        if(check(l, c)!=check(r, c)) ans+=b;
        b*=2;
        c++;
    }
    cout << ans;
    return 0;
}







