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

string star[200000], str2, str1;
long long ara[200005];
vector < pair <long long, long long> > ab;
vector < pair <long double, long long> > xy;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    while(cin>>n>>k){
        long double hor, lob;
        xy.clear();
        ab.clear();
        a = 0;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(__gcd(i, j)!=1) continue;
                hor = (long double)(i);
                lob = (long double)(j);
                xy.push_back({hor/lob, a});
                ab.push_back({j, i});
                a++;
            }
        }
        sort(xy.rbegin(), xy.rend());
        cout <<ab[xy[k-1].second].first<<"/"<<ab[xy[k-1].second].second<<endl;
    }
    return 0;
}







