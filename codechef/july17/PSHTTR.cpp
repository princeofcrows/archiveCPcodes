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

string star[200000], str, str1, str2, str3;
long long par[100005], ara2[100005], ara[100005], ans, k, v;
vector < pair <long long, long long> > ab;
map <long long, int> dat2;
vector < vector <long long> > g(100005);
vector < vector <long long> > gx(100005);
map <pair<long long, long long>, long long> dat;


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, h, h2, m2, c, a, mx, b, l, n, d;
    cin >> t;
    while(t--){
        cin >> n;
        vector < vector <long long> > tg(100005);
        swap(tg, g);
        dat.clear();
        memset(ara, 0, sizeof ara);
        for(i=0;i<n-1;i++){
            cin >> a >> b >> c;
            dat[{a, b}] = c;
            dat[{b, a}] = c;
            g[a].push_back(b);
            g[b].push_back(a);
            ara[a]++;
            ara[b]++;
        }
        temp = 0;
        for(i=1;i<=n;i++){
            if(ara[i]>temp){
                temp = ara[i];
                j = i;
            }
        }
        memset(ara, 0, sizeof ara);
        memset(ara2, 0, sizeof ara2);
        queue <long long> q;
        q.push(temp);
        while(!q.empty()){
            a = q.front();
            q.pop();
            for(i=0;i<g[a].size();i++){
                b = g[a][i];
                if(!ara[b]){
                    ara[b] = ara[a]+1;
                    ara2[b]^=dat[{a, b}];
                    par[b] = a;
                    q.push(b);
                }
            }
        }
        cin >> m;
        while(m--){
            cin >> a >> b >> k;
            ans = 0;
            j = a;
            while(ara[j]!=min(ara[a], ara[b])){
                c = dat[{j, par[j]}];
                if(c<=k) ans^=c;
                j = par[j];
            }
            i = j;
            j = b;
            while(ara[j]!=min(ara[a], ara[b])){
                c = dat[{j, par[j]}];
                if(c<=k) ans^=c;
                j = par[j];
            }
            while(j!=i){
                c = dat[{j, par[j]}];
                if(c<=k) ans^=c;
                j = par[j];
                c = dat[{i, par[i]}];
                if(c<=k) ans^=c;
                i = par[i];
            }
            cout << ans << endl;
        }
    }
    return 0;
}













