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
long long ara[2005], ara2[2005], par[2005], ara3[2005];
vector < pair <long long, long long> > ab;
vector < vector <long long> > x(1005);
map < long long, long long > y;
map <long long, long long> dat;
queue <long long> q;
long long d, bgt;

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, s;
    cin >> t;
    while(t--){
        cin >> n >> s >> k;
        d = 1;
        for(i=0;i<=1001;i++){
            x[i].clear();
            ara2[i] = 999999999;
        }
        dat.clear();
        ab.clear();
        y.clear();
        memset(ara, 0, sizeof ara);
        memset(par, -1, sizeof par);
        for(i=1;i<n;i++){
            cin >> a >> b;
            x[b].push_back(a);
            x[a].push_back(b);
            ara[a]++;
            ara[b]++;
        }
        ara2[s] = 0;
        q.push(s);
        while(!q.empty()){
            a = q.front();
            q.pop();
            for(i=0;i<x[a].size();i++){
                b = x[a][i];
                if(ara2[a]+1<ara2[b]){
                    ara2[b] = ara2[a]+1;
                    q.push(b);
                    par[b] = a;
                }
            }
        }
        ans = 0;
        dat[s] = 1;
        c = 1;
        d = 1;
        while(c){
            d += k;
            c = 0;
            for(i=1;i<=n;i++){
                if(ara2[i]==d){
                    ans++;
                    c = 1;
                    cout << i <<" ";
                }
            }
            d++;
        }
        cout << ans << endl;
    }
    return 0;
}







