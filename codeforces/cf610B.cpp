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

string star[200000], str, str1, str2;
long long ara[1000005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x, y;
queue < pair <long long, long long> > q;
queue <long long> arq[300005] ;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, e, v;
    cin >> n;
    a = 999999999999999;
    for(i=0;i<n;i++){
        cin >> ara[i];
        a = min(a, ara[i]);
    }
    for(i=0;i<n;i++){
        ara[i+n] = ara[i];
    }
    for(i=0;i<n+n;i++){
        if(ara[i]==a){
            x.push_back(i);
        }
    }
    d = 0;
    for(i=0;i<x.size()-1;i++){
        d = max(d, x[i+1]-x[i]-1);
    }
    ans = a*n+d;
    cout << ans;
    return 0;
}













