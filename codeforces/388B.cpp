#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

int g[1005][1005];
int x;
vector<int> chain;
vector<pii> cluster;

bool check(int N,int pos){
	return (bool)(N & (1<<pos));
}

void createCluster() {
	for(int i=0; i<31; i++) {
		int a = i*2 + 3;
		int b = a + 1;

		int n_a = b + 1;
		int n_b = b + 2;

		g[a][n_a] = 1;
		g[a][n_b] = 1;
		g[b][n_a] = 1;
		g[b][n_b] = 1;

		g[n_a][a] = 1;
		g[n_b][a] = 1;
		g[n_a][b] = 1;
		g[n_b][b] = 1;

		x = n_b + 1;
	}

	for(int i=0; i<32; i++) {
		int a = i*2 + 3;
		int b = a + 1;

		cluster.pb({a, b});
	}
}

void createChain() {
	for(int i=0; i<31; i++) {
		g[x][x+1] = 1;
		g[x+1][x] = 1;

		chain.pb(x);
		x++;
	}

	chain.pb(x);
	x++;
}

void makeChainClusterCon(int n) {
	if(n != 0) {
		g[1][3] = 1;
		g[3][1] = 1;

		g[1][4] = 1;
		g[4][1] = 1;

		g[cluster[n - 1].fi][chain[n]] = 1;
		g[chain[n]][cluster[n - 1].fi] = 1;

		g[cluster[n - 1].se][chain[n]] = 1;
		g[chain[n]][cluster[n - 1].se] = 1;
	} else {
		g[1][chain[0]] = 1;
		g[chain[0]][1] = 1;
	}

	g[2][chain.back()] = 1;
	g[chain.back()][2] = 1;
}

void solve(int k) {
	for(int i=31; i>=0; i--) {
		if(check(k, i)) {
			makeChainClusterCon(i);
		}
	}
}

void print() {
	cout << x << "\n";
	for(int i=1; i<=x; i++) {
		for(int j=1; j<=x; j++) {
			cout << (g[i][j] ? "Y" : "N");
		}
		cout << "\n";
	}
}

void init() {
	mem(g, 0);
	chain.clear();
	cluster.clear();
}

int32_t main(){
	//read();
	//write();
	fst;
	int k;
	while(cin >> k) {
		init();
		createCluster();
		createChain();
		solve(k);
		print();
	}
	return 0;
}
