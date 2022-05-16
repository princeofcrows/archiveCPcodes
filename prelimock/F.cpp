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
vector <pair <long long, long long> > ab;
vector <long long> g;
vector <long long> gr[1000005];
set <long long> s;
set <long long> s1;
set <long long> s2;
string str, str1;
long long ara[100005];
long long ara2[100005];
long long dp[1<<17];

void divi(){
    for(long long i=1;i<=1000000;i++){
        for(long long j=i;j<=1000000;j+=i){
            gr[j].push_back(i);
        }
    }
}

void gen(long long n){
    for(long long i=0;i<n;i++){
        long long a = ara[i];
        for(long long j=0;j<gr[ara[i]].size();j++){
            s.insert(gr[ara[i]][j]);
        }
    }
    for(set<long long>::iterator it=s.begin();it!=s.end();it++){
        g.push_back(*it);
    }
}

long long knap(long long i, long long mask, long long ans, long long n, long long m){
    long long c = 1;
    if(mask == (c<<n)-c){
        return ans;
    }
    if(i==g.size()){
        return 9999999999;
    }
    if(dp[mask]!=-1) return dp[mask];
    long long ret = knap(i+1, mask, ans, n, m);
    long long a = g[i];
    for(long long i=0;i<n;i++){
        if(ara[i]%a==0){
            mask = mask | (c << i);
        }
    }
    long long ret2 = knap(i+1, mask, ans+m/a, n, m);
    return dp[mask] = min(ret, ret2);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, l, c, h, m, b;
    cin >> t;
    d = 1;
    divi();
    while(t--){
        cin >> n >> m;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        memset(dp, -1, sizeof dp);
        g.clear();
        s.clear();
        gen(n);
        cout << "Case "<< d++ <<": " << knap(0, 0, 0, n, m) <<endl;
    }
    return 0;
}





















