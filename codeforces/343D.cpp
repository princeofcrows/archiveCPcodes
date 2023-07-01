#include <bits/stdc++.h>

using namespace std;

#define mx 500005
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

vector <int> g[mx];
int in[mx], out[mx];

struct treeNode {
	int prop;
	int sum;
};

treeNode tree[mx*8];

void update(int node, int b, int e, int i, int j, int val){
	if(tree[node].prop!=-1) {
		int tp = tree[node].prop;
		tree[node].prop = -1;
		tree[node].sum = tp*(e-b+1);
		if(b!=e) {
			tree[node*2].prop = tp;
			tree[node*2+1].prop = tp;
		}
	}
	if (i > e || j < b)
		return;
	if (b >= i && e <= j) {
		tree[node].sum = val*(e-b+1);
		if(b!=e) {
			tree[node*2].prop = val;
			tree[node*2+1].prop = val;
		}
		return;
	}
	int Left = node * 2;
	int Right = (node * 2) + 1;
	int mid = (b + e) / 2;
	update(Left, b, mid, i, j, val);
	update(Right, mid + 1, e, i, j, val);
	tree[node].sum = tree[Left].sum + tree[Right].sum;
}

int query(int node, int b, int e, int i, int j){
	if(tree[node].prop!=-1) {
		int tp = tree[node].prop;
		tree[node].prop = -1;
		tree[node].sum = tp*(e-b+1);
		if(b!=e) {
			tree[node*2].prop = tp;
			tree[node*2+1].prop = tp;
		}
	}
	if (i > e || j < b)
		return 0;

	if (b >= i and e <= j)
		return tree[node].sum;

	int Left = node << 1;
	int Right = (node << 1) + 1;
	int mid = (b + e) >> 1;

	int p1 = query(Left, b, mid, i, j);
	int p2 = query(Right, mid + 1, e, i, j);

	return p1 + p2;
}

int tme, par[mx];

void dfs(int u, int p) {
	tme++;
	in[u] = tme;
	par[u] = p;

	for(auto v: g[u]) {
		if(v != p) {

			dfs(v, u);
		}
	}

	out[u] = tme;
	//cout << u << " " << in[u] <<" " << out[u] << endl;
}

void initTree() {
	for(int i=0; i<8*mx; i++) {
		tree[i].prop = -1;
		tree[i].sum = 0;
	}
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, q;
	cin >> n;
	for(int i=1; i<n; i++) {
		int a, b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}

	tme = 0;
	dfs(1, -1);
	initTree();

	cin >> q;

	while(q--) {
		int c, u;
		cin >> c >> u;

		if(c == 1) {
			int sum = query(1, 1, n, in[u], out[u]);
			update(1, 1, n, in[u], out[u], 1);
			if(u != 1 && sum != out[u] - in[u] + 1) {
				update(1, 1, n, in[par[u]], in[par[u]], 0);
			}
		} else if(c == 2) {
			update(1, 1, n, in[u], in[u], 0);
		} else {
			int sum = query(1, 1, n, in[u], out[u]);
			//cout << sum << " " << u << endl;

			if(sum == out[u] - in[u] + 1) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
	}
	return 0;
}
