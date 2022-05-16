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
long long ara[100005], ara2[200005], n, k;
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

bool check(long long m){
    long long temp = k;
    long long a, b;
    for(long long i=0;i<n;i++){
        a = ara[i]*m;
        if(a>ara2[i]){
            temp-=(a-ara2[i]);
            if(temp<0) return false;
        }
    }
    return true;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, l, r;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    r = 0;
    for(i=0;i<n;i++){
        cin >> ara2[i];
        r = max(r, (ara2[i]+k)/ara[i]);
    }
    r+=10000;
    mx = r;
    l = 0;
    while(l<=r){
        m = (l+r)/2;
        if(check(m)){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    c = 0;
    for(i=max(c, l-10);i<=min(l+10, mx);i++){
        if(!check(i)){
            cout << i-1;
            return 0;
        }
    }
    return 0;
}














