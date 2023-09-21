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
long long ara[100005], ara2[100005], ara3[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> g[100005];
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

void seive(){
    memset(ara, 0, sizeof ara);
    for(long long i=2;i<=100000;i++){
        if(!ara[i]){
            x.push_back(i);
            for(long long j=i;j<=100000;j+=i){
                ara[j] = 1;
                if(ara2[j]) g[j].push_back(i);
            }
        }
    }
}


int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        ara2[a]++;
        ara3[i] = a;
    }
    seive();
    memset(ara2, 0, sizeof ara2);
    memset(ara, 0, sizeof ara);
    ans = 1;
    for(i=0;i<n;i++){
        mx = 0;
        for(j=0;j<g[ara3[i]].size();j++){
            a = g[ara3[i]][j];
            mx = max(mx, ara[a]+1);
        }
        for(j=0;j<g[ara3[i]].size();j++){
            a = g[ara3[i]][j];
            ara[a] = mx;
        }
        ans = max(mx, ans);
    }
    cout << ans;
    return 0;
}















