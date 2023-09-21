#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str3;

ll arsz;
vector <ll> ara;
string star[205];

//____________________________________________________________________________________//
//____________________________________________________________________________________//

vector < vector <ll> > graph(3005);
queue <ll> q;
ll vis[3005], boom[3005];
map <string, ll> dat;
map <ll, string> dat2;
vector <string> inf[14];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, l;
    while(cin >> n){
        for(i=0;i<n;i++){
            cin >> h;
            while(h--){
                cin >> a;
                graph[i].push_back(a);
            }
        }
        cin >> t;
        while(t--){
            cin >> a;
            q.push(a);
            for(i=0;i<=n;i++){
                vis[i] = 999999999;
            }
            vis[a] = 0;
            memset(boom, 0, sizeof boom);
            while(!q.empty()){
                a = q.front();
                q.pop();
                for(i=0;i<graph[a].size();i++){
                    if(!boom[graph[a][i]]){
                        boom[graph[a][i]] = true;
                        vis[graph[a][i]] = min(vis[a]+1, vis[graph[a][i]]);
                        q.push(graph[a][i]);
                    }
                }
            }
            ans = 0;
            memset(boom, 0, sizeof boom);
            for(i=0;i<n;i++){
                if(vis[i]<=n)boom[vis[i]]++;
            }
            for(i=1;i<=n;i++){
                if(boom[i]>ans){
                    ans = boom[i];
                    j = i;
                }
            }
            if(!ans) cout << 0 <<endl;
            else cout << ans <<" "<<j <<endl;
        }
    }
    return 0;
}















