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
long long ara[1000005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> m;
    for(i=0;i<m;i++){
        cin >> a;
        x.push_back(a);
    }
    for(i=0;i<m;i++){
        cin >> a;
        ab.push_back({a, i});
    }
    sort(ab.begin(), ab.end());
    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    for(i=0;i<m;i++){
        ara[ab[i].second] = x[i];
    }
    for(i=0;i<m;i++){
        cout << ara[i] <<" ";
    }
    return 0;
}













