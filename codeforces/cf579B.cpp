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
long long ara[200005], ara2[200005];
vector < pair < long long, pair <long long, long long> > > ab;
map <char, int> dat;
bool flag;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    for(i=2;i<=2*n;i++){
        for(j=1;j<i;j++){
            cin >> a;
            ab.push_back({a, {i, j}});
        }
    }
    sort(ab.rbegin(), ab.rend());
    memset(ara, -1, sizeof ara);
    for(i=0;i<ab.size();i++){
        a = ab[i].second.first;
        b = ab[i].second.second;
        if(ara[a]!=-1) continue;
        if(ara[b]!=-1) continue;
        ara[a] = b;
        ara[b] = a;
    }
    for(i=1;i<=2*n;i++){
        cout << ara[i] <<" ";
    }
    return 0;
}













