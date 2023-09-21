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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector < vector <pair <long long, long long> > > g(100005);

void dijkestra(long long n){
    long long i, a, b, c, d;
    for(i=1;i<=n;i++) ara[i] = 999999999999999;
    memset(ara2, -1, sizeof ara2);
    priority_queue < pair <long long, long long>, vector <pair <long long, long long> >, greater <pair <long long, long long> > > q;
    pair <long long, long long> top;
    ara[1] = 0;
    q.push({0, 1});
    while(!q.empty()){
        top = q.top();
        q.pop();
        b = top.first;
        a = top.second;
        if(ara[a]==b){
            for(i=0;i<g[a].size();i++){
                c = g[a][i].first;
                d = g[a][i].second;
                if(ara[c]>ara[a]+d){
                    ara2[c] = a;
                    ara[c] = ara[a]+d;
                    q.push({ara[c], c});
                }
            }
        }
    }
    if(ara2[n]==-1){
        cout << -1;
    }
    else{
        i = n;
        x.push_back(i);
        while(ara2[i]!=-1){
            x.push_back(ara2[i]);
            i = ara2[i];
        }
        reverse(x.begin(), x.end());
        for(i=0;i<x.size();i++) cout << x[i] <<" ";
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> a >> b >> c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    dijkestra(n);
    return 0;
}













