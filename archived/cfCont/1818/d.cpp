#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

vector <int> g[2005];
vector<pii> e;
bool f;
bool vis[2005];

void dfs(int u, int s, int p) {
	if(p != -1) {
		if(u == s) {
			int cnt = 0;

			std::vector<pii> ve;
			for(auto v: g[u]) {
				if(!vis[v]) {
					ve.pb({u, v});
					cnt++;
					if(cnt >= 2) break;
				}
			}

			if(cnt >= 2) {
				f = true;
				for(auto v: ve) e.pb(v);
			}

			return;
		}
	}

	for(auto v: g[u]) {
		if(v != p && !vis[v] && v == s) {
			e.pb({u, v});
			vis[v] = true;
			dfs(v, s, u);

			if(f) return;
			else {
				e.pop_back();
				vis[v] = false;
			}
		}
	}

	for(auto v: g[u]) {
		if(v != p && !vis[v]) {
			e.pb({u, v});
			vis[v] = true;
			dfs(v, s, u);

			if(f) return;
			else {
				e.pop_back();
				vis[v] = false;
			}
		}
	}
}

int32_t main(){
	//read();
	//write();
	//fst;

	int q;
	cin >> q;

	while(q--) {
		int n, m;
		si(n); si(m);

		while(m--) {
			int u, v;
			si(u); si(v);

			g[u].pb(v);
			g[v].pb(u);
		}

		f = false;
		for(int i=1; i<=n; i++) {
			if(g[i].size() > 3) {
				e.clear();
				mem(vis, false);

				dfs(i, i, -1);

				if(f) {
					printf("YES\n");
					printf("%d\n", (int)e.size());
					for(auto u: e) {
						printf("%d %d\n", u.fi, u.se);
					}
					break;
				}
			}
		}

		if(!f) cout << "NO\n";

		for(int i=0; i<=n; i++) g[i].clear();
	}

	return 0;
}
