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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <string, long long> p1;
map <string, long long> p2;
vector <string> p1s;
vector <string> p2s;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> k;
    if(n==1&&k>=1){
        cout << -1;
        return 0;
    }
    if(n==1&&k==0){
        cout << 1;
        return 0;
    }
    l = 0;
    if(n%2){
        l = 1;
        n--;
    }
    k-=((n-2)/2);
    a = k;
    b = k*2;
    j = 0;
    for(i=1;;i+=2){
        if(j>=n-2) break;
        if(a==i) continue;
        if(b==i) continue;
        if(b==i+1) continue;
        if(a==i+1) continue;
        x.push_back(i);
        x.push_back(i+1);
        j+=2;
    }
    if(k<=0){
        cout << -1;
        return 0;
    }
    x.push_back(a);
    x.push_back(b);
    for(i=0;i<x.size();i++) cout << x[i] <<" ";
    if(l) cout << 1000000000;
    return 0;
}













