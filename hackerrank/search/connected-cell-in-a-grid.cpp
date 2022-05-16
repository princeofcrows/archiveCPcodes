#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int vis[11][11], grid[11][11], ans1, temp, n, m;
bool ge2[11][11];

int dfs(int i, int j){
	//cout << i <<" " <<j<< " "<<vis[i][j]<<endl;
	if((i<0)||(i>=n)||(j<0)||(j>=m)) return 0;
	if(ge2[i][j]==true) return 0;
	if(grid[i][j]==0) return vis[i][j] = 0;
	//if(vis[i][j]!=-1) return vis[i][j];
	int ans = 1;
	ge2[i][j] = true;
	ans += dfs(i, j+1)+dfs(i+1, j)+dfs(i-1, j)+dfs(i, j-1)+dfs(i-1, j-1)+dfs(i+1, j+1)+dfs(i+1, j-1)+dfs(i-1, j+1);
	return vis[i][j] = ans;
}

int main() {
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> grid[i][j];
		}
	}
	ans1 = temp = 0;
	memset(vis, -1, sizeof vis);
	memset(ge2, false, sizeof ge2);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!ge2[i][j]){
				temp = dfs(i, j);
				if(temp>ans1) ans1 = temp;
			}
		}
	}
	cout<<ans1;
    return 0;
}

