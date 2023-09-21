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
vector <long long> g[3005];
string str, str1, star[105];
long long ara[105];
bool vis[3005];
map < pair <char, long long>, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, mx, d, k, c, h, m, b;
    cin >> n >> m;
    memset(ara, 0, sizeof ara);
    for(i=0;i<n;i++){
        cin >> star[i];
        for(j=0;j<m;j++){
            if(!dat[{star[i][j], j}]){
                dat[{star[i][j], j}] = 1;
                ara[j]++;
            }
        }
    }
    ans= 1;
    for(j=0;j<m;j++){
        ans*=ara[j];
        ans%=1000000007;
    }
    cout << ans;
    return 0;
}
















