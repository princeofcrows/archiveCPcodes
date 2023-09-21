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
long long ara[305][305];
vector <long long> x;
vector < vector <pair<long long, long long> > > g(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> ara[i][j];
            g[ara[i][j]].push_back({i, j});
        }
    }
    for(i=0;i<=305;i++){
        x.push_back(i*i);
    }
    for(i=0;i<=100000;i++){
        if(g[i].size()){
            l = g[i].size();
            if(!binary_search(x.begin(), x.end(), l)){
                cout << 0;
                return 0;
            }
            a = g[i][0].first;
            b = g[i][0].second;
            c = g[i][g[i].size()-1].first;
            d = g[i][g[i].size()-1].second;
            if(c-a!=d-b){
                cout << 0;
                return 0;
            }
            if((c-a+1)*(d-b+1)!=l){
                cout << 0;
                return 0;
            }
            for(j=0;j<g[i].size();j++){
                if(g[i][j].first<a||g[i][j].first>c){
                    cout << 0;
                    return 0;
                }
                if(g[i][j].second<b||g[i][j].second>d){
                    cout << 0;
                    return 0;
                }
            }
        }
    }
    cout << 1;
    return 0;
}













