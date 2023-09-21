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
long long ara[200005], y[200005], x[200005], z[200005], rz[200005];
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(200005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, j, i, m, c, a, b, mx, k, l, d;
    cin >> n;
    for(i=1;i<=n;i++){
       cin >> x[i];
    }
    for(i=1;i<n;i++){
       cin >> a >> b;
       g[a].push_back(b);
       g[b].push_back(a);
    }
    memset(y, 0, sizeof y);
    memset(ara, 0, sizeof ara);
    ara[1] = true;
    queue <long long> q;
    c = 1;
    q.push(c);
    rz[1] = x[1];
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(i=0;i<g[a].size();i++){
            b = g[a][i];
            if(!ara[b]){
                ara[b] = 1;
                d = __gcd(x[a], x[b]);
                rz[b] = __gcd(rz[a], x[b]);
                if(d==1){
                    y[b] = y[a]+1;
                }
                q.push(b);
            }
        }
    }
    z[1] = x[1];
    c = 1;
    q.push(c);
    memset(ara, 0, sizeof ara);
    ara[1] = true;
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(i=0;i<g[a].size();i++){
            b = g[a][i];
            if(!ara[b]){
                ara[b] = 1;
                if(y[b]>1){
                    z[b] = 1;
                }
                else if(y[b]==1){
                    z[b] = max(rz[a], __gcd(z[a], x[b]));
                }
                else if(y[b]==0){
                    z[b] = max(rz[a], __gcd(z[a], x[b]));
                }
                q.push(b);
            }
        }
    }
    for(i=1;i<=n;i++){
        cout << z[i] <<" ";
    }
    return 0;
}

















