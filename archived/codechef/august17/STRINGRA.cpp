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
vector < vector < long long > > ab(100005);
map < pair <long long, long long>, long long > dat;

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d, ans;
    cin >> t;
    while(t--){
        dat.clear();
        cin >> n >> m;
        for(i=0;i<=n;i++){
            ab[i].clear();
            ab[i].push_back(i);
        }
        c = 0;
        for(i=0;i<m;i++){
            cin >> a >> b;
            ab[a].push_back(b);
            if(dat[{a,b}]){
                c = 1;
            }
            if(a>=b){
                c = 1;
            }
            dat[{a, b}] = 1;
        }
        if(c){
            cout << -1 << endl;
            continue;
        }
        for(i=0;i<=n;i++){
            sort(ab[i].begin(), ab[i].end());
        }
        memset(ara, 0, sizeof ara);
        for(i=0;i<=n;i++){
            for(j=1;j<ab[i].size();j++){
                b = ara[ab[i][j-1]+1];
                for(l=ab[i][j-1]+1;l<ab[i][j];l++){
                    if(ara[l]!=b){
                        c = 1;
                        break;
                    }
                    ara[l] = 1;
                }
                if(c) break;
            }
            if(c) break;
        }
        if(c){
            cout << -1 << endl;
            continue;
        }
        for(i=0;i<=n;i++){
            a = 1;
            for(j=1;j<ab[i].size();j++){
                if(ara[ab[i][j]]) continue;
                ara[ab[i][j]] = a;
                a++;
            }
            if(c) break;
        }
        if(c){
            cout << -1 << endl;
            continue;
        }
        for(i=1;i<=n;i++) cout << ara[i] <<" ";
        cout << endl;
    }
    return 0;
}













