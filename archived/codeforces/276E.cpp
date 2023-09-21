
#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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


vector <int> tree[mx], g[mx];
int ara[mx], lev[mx], chain[mx], tot[mx];

int find(int idx, int lev){
	int sum = 0;
	while(idx>0) {
		sum += tree[lev][idx];
		idx -= (idx& -idx);
	}
	return sum;
}

void update(int idx, int val, int lev){
	while(idx<tree[lev].size()) {
		tree[lev][idx] += val;
		idx += (idx& -idx);
	}
}

int cnt;

void dfs(int u, int p, int l) {
	lev[u] = l;
	chain[u] = cnt;

	if(u != 1) {
		tree[chain[u]].pb(0);
	}

	for(auto v: g[u]) {
		if(v != p) dfs(v, u, l+1);

		if(u == 1) {
			tree[cnt].pb(0);
			cnt++;
		}
	}
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, q;
	while(cin >> n >> q) {
		for(int i=1; i<n; i++) {
			int a, b;
			cin >> a >> b;
			g[a].pb(b);
			g[b].pb(a);
		}
		cnt = 1;
		mem(tot, 0);
		dfs(1, 0, 0);
		tree[0].resize(n+1, 0);

		while(q--) {
			int t;
			cin >> t;

			if(t == 0) {
				int v, x, d;
				cin >> v >> x >> d;

				int l = lev[v] - d, r = lev[v] + d;

				if(v ==1 ) {
					update(1, x, 0);
					update(d+2, -x, 0);
				} else if(lev[v] <= d) {
					int ex = d - lev[v] + 1;
					update(1, x, 0);
					update(ex+1, -x, 0);


					update(ex, x, chain[v]);
					update(r+1, -x, chain[v]);

					//cout << ex << " -- > " << v << endl;
				} else {
					update(l, x, chain[v]);
					update(r+1, -x, chain[v]);
				}
			} else {
				int v;
				cin >> v;
				if(v == 1) {
					cout << find(1, 0) << endl;
				} else {
					cout << find(lev[v], chain[v])  +  find(lev[v] + 1, 0)<< "\n";
				}
			}

			//cout << find(lev[2] + 1, 0) << " " << find(lev[2], chain[2]) << endl;
		}
	}
	return 0;
}
