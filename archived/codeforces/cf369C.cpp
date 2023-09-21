#include <bits/stdc++.h>

using namespace std;

#define mx 400005
//#define int long long
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

int road_fix[mx], res[mx];
vector<int> g[mx];

void init(int n) {
	for(int i=1; i<=n; i++) {
		road_fix[i] = 0;
		res[i] = 0;
		g[i].clear();
	}
}

void read_input(int n) {
	for(int i=1; i<n; i++) {
		int x, y, z;
		cin >> x >> y >> z;

		g[x].pb(y);
		g[y].pb(x);

		if(z == 2) {
			road_fix[x] = 1;
			road_fix[y] = 1;
		}
	}
}

void dfs(int u, int p) {
	res[u] = road_fix[u];

	for(auto v: g[u]) {
		if(v != p) {
			dfs(v, u);

			res[u] += res[v];
		}
	}
}

void solve(int n) {
	dfs(1, -1);

	vector <int> v;

	for(int i=1; i<=n; i++) {
		if(res[i] == 1) {
			v.pb(i);
		}
	}

	cout << v.size() << "\n";
	for(auto u: v) {
		cout << u << " ";
	}
	cout << "\n";
}

int32_t main(){
	//read();
	//write();
	fst;
	int n;

	while(cin >> n) {
		init(n);

		read_input(n);

		solve(n);
	}
	return 0;
}
