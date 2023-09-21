#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

vector <pii> g[mx];
int down_cnt[mx], up_cnt[mx], sub_tree_cnt[mx];

bool is_lucky(int num) {
	while(num) {
		if(num%10 != 4 && num%10 != 7) return false;

		num /= 10;
	}

	return true;
}

void dfs_down(int u, int p) {
	down_cnt[u] = 0;
	sub_tree_cnt[u] = 1;

	for(auto v: g[u]) {
		if(v.fi == p) continue;

		dfs_down(v.fi, u);

		sub_tree_cnt[u] += sub_tree_cnt[v.fi];

		if(is_lucky(v.se)) {
			down_cnt[u] += sub_tree_cnt[v.fi];
		} else {
			down_cnt[u] += down_cnt[v.fi];
		}
	}
}

void dfs_up(int u, int p, int n) {
	for(auto v: g[u]) {
		if(v.fi == p) continue;

		if(is_lucky(v.se)) {
			up_cnt[v.fi] = n - sub_tree_cnt[v.fi];
		} else {
			up_cnt[v.fi] = up_cnt[u] + down_cnt[u] - down_cnt[v.fi];
		}

		dfs_up(v.fi, u, n);
	}
}


int32_t main(){
	//read();
	//write();
	fst;
	int n;
	while(cin >> n) {
		for(int i=0; i<n-1; i++) {
			int v, u, w;
			cin >> v >> u >> w;

			g[u].pb({v, w});
			g[v].pb({u, w});
		}

		dfs_down(1, -1);
		up_cnt[1] = 0;
		dfs_up(1, -1, n);

		int ans = 0;

		for(int i=1; i<=n; i++) {
			ans += (
				down_cnt[i] * (down_cnt[i] - 1)
				+ up_cnt[i] * (up_cnt[i] - 1)
				+ 2 * up_cnt[i] * down_cnt[i]
				);

			g[i].clear();
		}

		cout << ans << endl;
	}
	return 0;
}
