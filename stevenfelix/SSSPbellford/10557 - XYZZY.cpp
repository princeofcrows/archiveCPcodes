#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
ll ara[205], dis[205];
bool vis[205], vis2[205], en;
vector <vector <ll> > graph(205);

void dfs(ll u, ll n){
    if(vis[u]) return;
    vis[u] = true;
    for(ll i=0;i<graph[u].size();i++){
        dfs(graph[u][i], n);
    }
}
void dfs2(ll u, ll n){
    if(vis2[u]) return;
    vis2[u] = true;
    if(vis[u]){
        en = true;
        return;
    }
    for(ll i=0;i<graph[u].size();i++){
        dfs2(graph[u][i], n);
    }
}

int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s, e, l, d;
    d = 1;
    while(cin >> n){
        if(n<0) break;
        for(i=1;i<=n;i++){
            cin >> ara[i];
            cin >> a;
            ara[i]*=-1;
            for(j=0;j<a;j++){
                cin >> b;
                graph[i].push_back(b);
            }
            dis[i] = 9999999999999;
        }
        dis[1] = -100;
        for(i=0;i<n-1;i++){
            for(j=1;j<=n;j++){
                for(l=0;l<graph[j].size();l++){
                    temp = dis[graph[j][l]];
                    dis[graph[j][l]] = min(dis[j]+ara[graph[j][l]], dis[graph[j][l]]);
                    if(dis[graph[j][l]]>=0) dis[graph[j][l]] = temp;
                }
            }
        }
        en = false;
        for(j=1;j<=n;j++){
            for(l=0;l<graph[j].size();l++){
                if((dis[graph[j][l]]>dis[j]+ara[graph[j][l]])&&(dis[graph[j][l]]<9999999)){
                    memset(vis, false, sizeof vis);
                    dfs(j, n);
                    if(vis[n]){
                        memset(vis2, false, sizeof vis2);
                        dfs2(1, n);
                    }
                }
            }
        }
        if(en) cout << "winnable\n";
        else if((dis[n]<0)) cout << "winnable\n";
        else cout << "hopeless\n";
        vector <vector <ll> > tgraph(205);
        swap(tgraph, graph);
    }
    return 0;
}
