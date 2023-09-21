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
long long ara[200005], ara2[200005], ara3[200005], po;
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

void dfs(long long i, long long k, long long n){
    if(i>=n) return;
    ara2[i] = 1;
    po += ara[i];
    dfs(i+k, k, n);
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f, r;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    memset(ara2, 0, sizeof ara2);
    mx = 999999999999999;
    for(i=0;i<n;i++){
        if(ara2[i]==0){
            po = 0;
            dfs(i, k, n);
            if(po<mx){
                ans = i;
                mx = po;
            }
        }
    }
    cout << ans+1;
    return 0;
}







