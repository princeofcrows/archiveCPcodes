#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
ll ara[205], dis[205];
vector <vector <pii> > graph(205);

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s, e, l, d;
    d = 1;
    while(cin >> n){
        for(i=1;i<=n;i++){
            cin >> ara[i];
            dis[i] = 99999999999999;
        }
        dis[1] = 0;
        cin >> m;
        while(m--){
            cin >> a >> b;
            graph[a].push_back({b, (ara[b]-ara[a])*(ara[b]-ara[a])*(ara[b]-ara[a])});
        }
        for(i=0;i<n;i++){
            for(j=1;j<=n;j++){
                for(l=0;l<graph[j].size();l++){
                    dis[graph[j][l].first] = min(dis[j]+graph[j][l].second, dis[graph[j][l].first]);
                }
            }
        }
        c = 1;
        for(j=1;j<=n;j++){
            for(l=0;l<graph[j].size();l++){
                if((dis[graph[j][l].first]>dis[j]+graph[j][l].second)){
                    dis[graph[j][l].first] = -99999999999;
                }
            }

        }
        cin >> t;
        cout << "Set #"<<d++<<endl;
        while(t--){
            cin >> a;
            if((dis[a]>=3)&&(dis[a]<999999999999))cout << dis[a] << endl;
            else cout << "?" << endl;
        }
        vector <vector <pii> > tgraph(205);
        swap(tgraph, graph);
    }
    return 0;
}















