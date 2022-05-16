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
long long ara[100005], dp[60][60];
vector <long long> x;
vector <long long> y;
vector <long long> z;
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
map <long long, long long> dat2;
vector < vector <long long> > g;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        x.push_back(a);
        z.push_back(a);
        dat[a] = i;
    }
    sort(x.begin(), x.end());
    for(i=0;i<n;i++){
        dat2[x[i]] = i;
    }
    memset(ara, 0, sizeof ara);
    for(i=0;i<n;i++){
        if(ara[i]==0){
            ara[i] = 1;
            y.clear();
            y.push_back(i);
            j = i;
            while(ara[dat2[z[j]]]==0){
                ara[dat2[z[j]]] = 1;
                j = dat2[z[j]];
                y.push_back(j);
            }
            g.push_back(y);
        }
    }
    cout << g.size()<<endl;
    for(i=0;i<g.size();i++){
        cout << g[i].size() <<" ";
        for(j=0;j<g[i].size();j++){
            cout << g[i][j]+1 << " ";
        }
        cout << endl;
    }
    return 0;
}














