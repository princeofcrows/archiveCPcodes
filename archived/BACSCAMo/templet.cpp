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
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector < vector < pair <long long, long long> > > gl(200005);
vector < vector <long long> > gll(200005);
vector < vector < pair <long long, long long> > > gr(200005);
vector < vector <long long> > grr(200005);
vector < vector <long long> > glc(200005);
vector < vector <long long> > grc(200005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> a >> b >> c;
        t = b-a+1;
        gl[t].push_back({a, i});
        gll[t].push_back(a);
        gr[t].push_back({b, i});
        grr[t].push_back(b);
        x.push_back(c);
    }
    for(i=1;i<=m;i++){
        sort(gl[i].begin(), gl[i].end());
        sort(gll[i].begin(), gll[i].end());
        sort(gr[i].begin(), gr[i].end());
        sort(grr[i].begin(), grr[i].end());
    }
    for(i=1;i<=m;i++){
        t = 9999999999999999;
        if(gl[i].size()){
            for(j=gl[i].size()-1;j>=0;j--){
                t = min(t, x[gl[i][j].second]);
                glc[i].push_back(t);
            }
        }
    }
    ans = 9999999999999999;
    c = 0;
    for(i=1;i<m;i++){
        t = m-i;
        for(j=0;j<gr[i].size();j++){
            l = upper_bound(gll[t].begin(), gll[t].end(), grr[i][j])-gll[t].begin();
            if((l!=gll[t].size())){
                ans = min(ans, x[gr[i][j].second]+glc[t][l]);
                c = 1;
            }
        }
    }
    if(c==0) cout << -1;
    else cout << ans;
    return 0;
}













