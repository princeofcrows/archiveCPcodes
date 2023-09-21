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

long long ara[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> g[100005];
set <char> st;
map <long long, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=1;i<=n;i++) ara[i] = 9999999999999;
    for(i=0;i<m;i++){
        cin >> a >> b >> c;
        ab.clear();
        ab.push_back({0, 0});
        ab.push_back({ara[a], a});
        ab.push_back({ara[b], b});
        ab.push_back({ara[c], c});
        sort(ab.begin(), ab.end());
        for(j=1;j<=3;j++){
            //cout << ab[j].first <<" "<<ab[j].second <<endl;
            if(ab[j].first!=1&&ab[j].first!=2&&ab[j].first!=3){
                ara[ab[j].second] = ab[j-1].first+1;
                if(ara[ab[j].second]==4) ara[ab[j].second] = 1;
                ab[j].first = ara[ab[j].second];
            }
        }
    }
    for(i=1;i<=n;i++){
        cout << ara[i] <<" ";
    }
    return 0;
}















