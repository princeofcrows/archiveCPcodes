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
long long ara[300005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;
priority_queue <pair<long long, long long> > q;

void rec(long long u, long long n){
    if(u>=n||u<0) {
        cout <<"FINITE";
        return;
    }
    if(ara2[u]){
        cout <<"INFINITE";
        return;
    }
    ara2[u] = 1;
    if(str[u]=='>') rec(u+ara[u], n);
    else if(str[u]=='<') rec(u-ara[u], n);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >>str;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    memset(ara2, 0, sizeof ara2);
    rec(0, n);
    return 0;
}













