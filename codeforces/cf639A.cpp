//prince_of_crows
//buet_mushroom
//revolution_for_redemption

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

string star[200000], str;
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> k >> a;
    for(i=0;i<n;i++){
        cin >> t;
        x.push_back(t);
    }
    while(a--){
        cin >> b >> c;
        if(b==1){
            if(ab.size()<k) ab.push_back({x[c-1], c});
            else{
                if(ab[0].first<x[c-1]){
                    ab[0].first = x[c-1];
                    ab[0].second = c;
                }
            }
            sort(ab.begin(), ab.end());
        }
        else{
            for(i=0;i<ab.size();i++){
                if(ab[i].second==c){
                    cout << "YES\n";
                    break;
                }
            }
            if(i==ab.size()){
                cout << "NO\n";
            }
        }
    }
    return 0;
}




















