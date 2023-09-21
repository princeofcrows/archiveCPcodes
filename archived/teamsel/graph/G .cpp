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
long long ara[300005], ara2[300005], ara3[300005];
vector <long long> x;
vector <long long> y;
vector <long long> g[1000];
map <long long, long long> dat;

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c, m;
    cin >> n >> m >> k;
    for(i=0;i<k;i++){
        cin >> a;
        dat[a] = 1;
        x.push_back(a);
    }
    for(i=1;i<=n;i++){
        if(!dat[i]) y.push_back(i);
    }
    if(y.size()>=1){
        cout << -1;
        return 0;
    }
    temp = m;
    for(i=0;i<y.size();i++){
        for(j=i+1;j<y.size();j++){
            g[y[i]].push_back(y[j]);
            temp--;
            if(!temp) break;
        }
        if(!temp) break;
    }
    if(temp){
        for(i=0;i<y.size();i++){
            for(j=0;j<x.size();j++){
                g[y[i]].push_back(x[j]);
                temp--;
                if(!temp) break;
            }
            if(!temp) break;
        }
    }
    if(temp){
        for(i=0;i<x.size();i++){
            for(j=i+1;j<x.size();j++){
                g[x[i]].push_back(x[j]);
                temp--;
                if(!temp) break;
            }
            if(!temp) break;
        }
    }
    if(temp){
        cout << -1;
        return 0;
    }
    for(i=1;i<=n;i++){
        for(j=0;j<g[i].size();j++){
            cout << i <<" "<<g[i][j]<<endl;
        }
    }
    return 0;
}





















