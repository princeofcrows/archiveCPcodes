#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

ll arsz;
vector <ll> ara;
string star[205];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <pii> > graph(20005);
ll vis[20005];
map <string, ll> dat;
map <ll, string> dat2;

priority_queue <pii, vector<pii>, greater<pii>> q;
pii top;

void dijkstra(ll sx, ll n){
    for(int i=0;i<n;i++)
        vis[i] = INT_MAX;
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
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s;
    cin >> h;
    h2 = 1;
    while(h--){
        cin >> n >> m >> s >> t;
        for(i=0;i<m;i++){
            cin >> a >> b >> c;
            graph[a].push_back({b, c});
            graph[b].push_back({a, c});
        }
        dijkstra(s, n);
        if(vis[t]==INT_MAX) cout << "Case #"<<h2++<<": "<<"unreachable"<<endl;
        else cout << "Case #"<<h2++<<": "<<vis[t]<<endl;
        for(i=0;i<n;i++){
            graph[i].clear();
        }
    }
    return 0;
}















