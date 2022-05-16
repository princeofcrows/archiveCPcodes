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
map <long long, long long> dat;
vector < vector <long long> > g(30001);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> a;
    for(i=0;i<n;i++){
        cin >> ara[i] >> ara2[i];
        g[ara[i]].push_back(i);
        g[ara[i]+1].push_back(i);
    }
    ans = 0;
    for(i=1;i<3010;i++){
        b = 0;
        for(j=0;j<g[i].size();j++){
            if(ara2[g[i][j]]){
                c = min(a-b, ara2[g[i][j]]);
                ara2[g[i][j]] -= c;
                b += c;
                if(b==a) break;
            }
        }
        ans+=b;
    }
    cout << ans;
    return 0;
}













