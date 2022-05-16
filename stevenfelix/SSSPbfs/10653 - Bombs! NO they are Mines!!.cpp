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
queue < pair<ll, ll> > q;
ll vis[1005][1005], boom[1005][1005];
ll dx[] = {1, -1};
ll dy[] = {1, -1};

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, l, d;
    while(cin >> n >> m){
        if(n==0&&m==0) break;
        cin >> h;
        memset(vis, 0, sizeof vis);
        memset(boom, 0, sizeof boom);
        for(i=0;i<h;i++){
            cin >> c >> b;
            for(j=0;j<b;j++){
                cin >> a;
                vis[c][a] = -1;
            }
        }
        cin >> c >> d;
        q.push({c, d});
        pair <ll, ll> top;
        while(!q.empty()){
            top = q.front();
            q.pop();
            for(i=0;i<2;i++){
                a = top.first+dx[i];
                b = top.second;
                if(a>=0&&a<n){
                    if(!vis[a][b]){
                        vis[a][b] = vis[top.first][top.second]+1;
                        q.push({a, b});
                    }
                }
            }
            for(i=0;i<2;i++){
                a = top.first;
                b = top.second+dy[i];
                if(b>=0&&b<m){
                    if(!vis[a][b]){
                        vis[a][b] = vis[top.first][top.second]+1;
                        q.push({a, b});
                    }
                }
            }
        }
        cin >> c >> d;
        cout << vis[c][d] << endl;
    }
    return 0;
}















