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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, v, theta, d;
    while(cin>>a>>b>>v>>theta>>t){
        if(a==0&&b==0&&v==0&&theta==0&&t==0) break;
        d = t*v/2;
        n = (d*cos(theta*acos(-1)/180)-a/2)/a+1;
        m = (d*sin(theta*acos(-1)/180)-b/2)/b+1;
        cout <<floor(n)<<" "<<floor(m)<<endl;
    }
    return 0;
}







