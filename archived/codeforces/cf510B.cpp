#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

string ara[105];
bool vis[100][100], cycle;
string str, str2;
long long n, m;
long long dx[] = {0, 0, 1, -1};
long long dy[] = {1, -1, 0, 0};

void dfs(char ch, long long r, long long c, long long sr, long long sc){
    if(r>=n||c>=m||r<0||c<0) return;
    if(ara[r][c]!=ch) return;
    if(vis[r][c]){
        cycle = true;
        return;
    }
    vis[r][c] = true;
    for(long long i=0;i<4;i++){
        long long nr = r+dx[i];
        long long nc = c+dy[i];
        if(nr==sr&&nc==sc) continue;
        dfs(ch, nr, nc, r, c);
    }
}

int main(){
    //freopen("in.txt", "r", stdin);
	long long int a, ans, i, j, d, temp;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    cycle = false;
    memset(vis, false, sizeof vis);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(vis[i][j]==false){
                dfs(ara[i][j], i, j, -1, -1);
                if(cycle){
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";
	return 0;
}













