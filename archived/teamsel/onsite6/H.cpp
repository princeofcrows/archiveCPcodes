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

int g[105][105];
stack <int> stk;
map <string, int> dat;
int ans, mx, ara[105], sz[105];
string str, str1;
vector < pair <int, int> > ab;


int main() {
    //freopen("in.txt", "r", stdin);
    int temp, t, j, i, m, h2, m2, c, a, b, d, k, l, r, n;
    cin >> t;
    while(t--){
        cin >> n >> m;
        memset(ara, 0, sizeof ara);
        memset(sz, 0, sizeof sz);
        memset(g, 0, sizeof g);
        ab.clear();
        for(i=0;i<m;i++){
            cin >> a >> b;
            ab.push_back({a, b});
            ara[a]++;
            ara[b]++;
        }
        a = 0;
        for(i=0;i<ab.size();i++){
            if(ara[ab[i].first]==1){
                sz[ab[i].second]++;
            }
            if(ara[ab[i].second]==1){
                sz[ab[i].first]++;
            }
        }
        a = 0;
        for(i=1;i<=n;i++){
            if(sz[i]>1){
                a = 3;
                break;
            }
            if(ara[i]==0) {
                a = 3;
                break;
            }
        }
        if(a%2) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}







