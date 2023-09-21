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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector < vector <long long> > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        g[a].push_back(i);
    }
    for(i=1;i<=100000;i++){
        if(g[i].size()==0) continue;
        if(g[i].size()==1) ab.push_back({i, 0});
        else{
            a = g[i][1]-g[i][0];
            for(j=1;j<g[i].size();j++){
                b = g[i][j]-g[i][j-1];
                if(b!=a) break;
            }
            if(j==g[i].size()) ab.push_back({i, a});
        }
    }
    cout << ab.size() << endl;
    for(i=0;i<ab.size();i++){
        cout << ab[i].first <<" "<<ab[i].second<<endl;
    }
    return 0;
}













