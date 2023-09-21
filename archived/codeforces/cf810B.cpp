//price_of_crows
//revolution_for_redemption
//BUET_Mushroom

#include <bits/stdc++.h>

using namespace std;

vector <pair  <long long, long long>  > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000];

long long ara[200005], ara2[200005], ara3[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

bool vis[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f;
    cin >> n >> f;
    for(i=0;i<n;i++){
        cin >> ara2[i] >> ara[i];
    }
    for(i=0;i<n;i++){
        if(ara2[i]*2>ara[i]) ara3[i] = ara[i];
        else ara3[i] = ara2[i]*2;
        if(ara3[i]>min(ara2[i], ara[i])) xy.push_back({ara3[i]-min(ara2[i], ara[i]), i});
    }
    sort(xy.begin(), xy.end());
    reverse(xy.begin(), xy.end());
    ans = 0;
    memset(vis, true, sizeof vis);
    c = xy.size();
    for(i=0;i<min(f, c);i++){
        ans+=ara3[xy[i].second];
        vis[xy[i].second] = false;
    }
    for(i=0;i<n;i++){
        if(vis[i]) ans+= min(ara2[i], ara[i]);
    }
    cout << ans;
    return 0;
}
