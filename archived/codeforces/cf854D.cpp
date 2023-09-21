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
long long ara[300005], ara2[300005], ara3[300005];
vector <long long> x[100005];
vector <long long> y;
vector < pair <long long, long long> > ab[100005];
vector < pair <long long, long long> > ba[100005];


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    cin >> n >> m >> k;
    for(i=0;i<m;i++){
        cin >> d >> f >> t >> c;
        if(f==0){
            ab[t].push_back({d, c});
            ba[t].push_back({d, c});
        }
        else if(t==0){
            ab[f].push_back({d, c});
            ba[f].push_back({d, c});
        }
    }
    ans = 0;
    for(i=1;i<=n;i++){
        sort(ab[i].begin(), ab[i].end());
        sort(ba[i].rbegin(), ba[i].rend());
        if((ab[i][0].first-ab[i][0].first)<=k){
            cout << -1;
            return 0;
        }
        for(j=1;j<ab[i].size();j++){
            ab[i][j].second = min(ab[i][j].second, ab[i][j-1].second);
        }
        for(j=1;j<ba[i].size();j++){
            ba[i][j].second = min(ba[i][j].second, ba[i][j-1].second);
        }
        i = 0;
        mn = 9999999999999999;
        for(j=0;j<ab.size();j++){

        }
    }
    return 0;
}





















