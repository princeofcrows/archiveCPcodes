#include <bits/stdc++.h>
#define ll long long
#define pii pair <ll, ll>

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

ll cb[1000][1000];
ll vis[1000][1000], row, col;
ll dx[] = {1,-1,0,0};
ll dy[] = {0,0,1,-1};
priority_queue <pair<ll,pii>, vector <pair<ll,pii>>, greater<pair<ll,pii>>> q;
pair<ll,pii> top;

void bfs(int sx, int sy){
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            vis[i][j] = INT_MAX;
    vis[sx][sy] = cb[sx][sy];
    q.push({cb[sx][sy], {sx, sy}});
    while(!q.empty()){
        top = q.top();
        q.pop();
        for(int i=0;i<4;i++){
            int xx = top.second.first+dx[i];
            int yy = top.second.second+dy[i];
            if(xx<0||yy<0) continue;
            if(xx>=row||yy>=col) continue;
            if(vis[top.second.first][top.second.second]==top.first){
                if(vis[xx][yy]>cb[xx][yy]+vis[top.second.first][top.second.second]){
                    vis[xx][yy]=cb[xx][yy]+vis[top.second.first][top.second.second];
                    q.push({vis[xx][yy],{xx, yy}});
                }
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n;
    cin >> t;
    while(t--){
        cin >> row >> col;
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                cin >> cb[i][j];
        bfs(0, 0);
        cout << vis[row-1][col-1];
        cout <<endl;
    }
    return 0;
}















