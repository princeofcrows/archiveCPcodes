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

vector < vector <pii> > graph(2005);
ll vis[2005], z;
map <ll, ll> dat;
map <ll, string> dat2;

priority_queue <pii, vector<pii>, greater<pii>> q;
pii top;
ll n, m;

void bellmanford(){
    ll i, j, k;
    for(i=0;i<n;i++) vis[i] = 99999999999999;
    vis[0] = 0;
    for(i=1;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<graph[j].size();k++){
                vis[graph[j][k].first] = min(vis[graph[j][k].first], vis[j]+graph[j][k].second);
            }
        }
    }
    for(j=0;j<n;j++){
        for(k=0;k<graph[j].size();k++){
            if(vis[j]+graph[j][k].second<vis[graph[j][k].first]){
                cout << "possible" <<endl;
                return;
            }
        }
    }
    cout << "not possible" <<endl;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, p, s;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(i=0;i<m;i++){
            cin >> a >> b >> c;
            graph[a].push_back({b, c});
        }
        bellmanford();
        for(i=0;i<=1005;i++){
            graph[i].clear();
        }
    }
    return 0;
}















