#include <bits/stdc++.h>

using namespace std;

#define mx 200015
#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 1000000007
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string g[1005];
string e = "DIMA";
int dp[1005][1005], vis[1005][1005];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;

int dfs(int x, int y, int id) {
	if(dp[x][y] != -1) return dp[x][y];
	if(vis[x][y] == 2) return mod;

	vis[x][y] = 2;
	int ret = 1;

	for(int i=0; i<4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx < n && nx >= 0 && ny >= 0 && ny < m) {
			int nid = (id + 1) % 4;
			if(g[nx][ny] == e[nid]) {
				ret = max(ret, dfs(nx, ny, nid) + 1);
			}
		}
	}

	vis[x][y] = 1;
	//cout << x << " " << y << " " << ret << endl;

	return dp[x][y] = ret;
}

int32_t main(){
	//read();
	//write();
	fst;

	while(cin >> n >> m) {
		for(int i=0; i<n; i++) {
			cin >> g[i];
		}

		mem(dp, -1);
		mem(vis, 0);
		int ans = 0;

		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(g[i][j] == e[0] && !vis[i][j]) {
					ans = max(ans, dfs(i, j, 0));
					//cout << "------\n";
				}
			}
		}

		ans /= 4LL;

		if(ans == 0) cout << "Poor Dima!\n";
		else if(ans >= (mod / 4)) cout << "Poor Inna!\n";
		else cout << ans << "\n";
	}
	return 0;
}
