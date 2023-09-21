#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <pii> > graph(100005);
ll vis[100005], ara[100005], ara2[100005];
map <string, ll> dat;
map <ll, string> dat2;

priority_queue <pii, vector<pii>, greater<pii>> q;
pii top;

void dijkstra(ll sx, ll n){
    for(int i=1;i<=n;i++){
        vis[i] = 999999999999999999;
    }
    vis[sx] = 0;
    q.push({sx, 0});
    while(!q.empty()){
        top = q.top();
        q.pop();
        if(top.second==vis[top.first]){
            for(int i=0;i<graph[top.first].size();i++){
                if(vis[graph[top.first][i].first]>vis[top.first]+graph[top.first][i].second){
                    vis[graph[top.first][i].first]=vis[top.first]+graph[top.first][i].second;
                    q.push({graph[top.first][i].first, vis[graph[top.first][i].first]});
                }
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s, v;
    cin >> h;
    h2 = 1;
    while(h--){
        cin >> n >> m >> s >> t >> v;
        for(i=0;i<m;i++){
            cin >> a >> b >> c;
            graph[a].push_back({b, c});
            graph[b].push_back({a, c});
        }
        dijkstra(s, n);
        for(i=1;i<=n;i++){
            ara2[i] = vis[i];
        }
        dijkstra(v, n);
        for(i=1;i<=n;i++){
            ara[i] = vis[i];
        }
        dijkstra(t, n);
        ans = 999999999999999999;
        for(i=1;i<=n;i++){
            ans = min(ans, ara2[i]+ara[i]+vis[i]);
        }
        cout << ans << endl;
        for(i=0;i<=n;i++){
            graph[i].clear();
        }
    }
    return 0;
}















