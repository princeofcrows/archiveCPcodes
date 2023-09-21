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

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//

int cb[100][100];
int vis[100][100], row, col;
int dx[] = {2,-2,2,-2,1,-1,1,-1};
int dy[] = {1,1,-1,-1,2,2,-2,-2};
queue <pair<int,int>> q;
pair <int, int> top;

void bfs(int sx, int sy){
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cb[i][j] = -1;
    cb[sx][sy] = 0;
    q.push({sx, sy});
    while(!q.empty()){
        top = q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int xx = top.first+dx[i];
            int yy = top.second+dy[i];
            if(xx<0||yy<0) continue;
            if(xx>=row||yy>=col) continue;
            if(cb[xx][yy]==-1){
                cb[xx][yy]=cb[top.first][top.second]+1;
                q.push({xx, yy});
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n;
    row = col = 8;
    while(cin >> str >> str1){
        //cout <<str<<str1<<endl;
        a = (str[0]-'a');
        b = (str[1]-'0'-1);
        bfs(a, b);
        cout <<"To get from "<<str<<" to "<<str1<<" takes "<<cb[str1[0]-'a'][str1[1]-'0'-1]<<" knight moves.\n";
    }
    return 0;
}















