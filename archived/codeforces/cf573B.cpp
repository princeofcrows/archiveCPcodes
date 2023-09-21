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
long long ara[100005], ara2[100005], ara3[50005];
vector <long long> y;
vector <long long> z;
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
map <long long, long long> dat2;
vector < vector <long long> > g;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    ara2[0] = 1;
    for(i=1;i<n-1;i++){
        ara2[i] = min(ara[i],ara2[i-1]+1);
    }
    ara2[n-1] = 1;
    for(i=n-2;i>=0;i--){
        ara2[i] = min(ara2[i],ara2[i+1]+1);
    }
    b = 1;
    for(i=1;i<n-1;i++){
        b = max(b, ara2[i]);
    }
    cout << b;
    return 0;
}
