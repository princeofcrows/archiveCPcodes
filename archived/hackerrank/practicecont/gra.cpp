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

long long ara[300005], ara2[300005], ara3[300005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}
//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <long long> > graph(500005);
bool vis[500005];

int main() {
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);   cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, f, g ,s, k;
    cin >> n >> m >> k;
    for(i=1;i<=n;i++){
        xy.push_back({0, i});
    }
    for(i=0;i<m;i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        xy[a-1].first++;
        xy[b-1].first++;
    }
    sort(xy.begin(), xy.end());
    reverse(xy.begin(), xy.end());
    memset(vis, false, sizeof vis);
    for(i=0;i<n;i++){
        if(!vis[xy[i].second]){
            x.push_back(xy[i].second);
            for(j=0;j<graph[xy[i].second].size();j++){
                vis[graph[xy[i].second][j]] = true;
            }
        }
    }
    cout << x.size() << endl;
    for(i=0;i<x.size();i++){
        cout << x[i] <<" ";
    }
    return 0;
}




















