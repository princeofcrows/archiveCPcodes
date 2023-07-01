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

int a[mx], b[mx];
int seed = 173;
vector <pii> g[mx];

int bigMod(int a, int b) {
	if (b == 0) return 1;

	int res = bigMod(a, b / 2);
	res = (res * res) % mod;

	if (b % 2) {
		return (res * a) % mod;
	}

	return res;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, m, p;
	while(cin >>n >> m >> p) {
		for(int i=0; i<n; i++) {
			cin >> a[i];
			g[i%p].pb({a[i], i+1});
		}

		int hash = 0;
		for(int i=0; i<m; i++) {
			cin >> b[i];
			hash = (hash + bigMod(seed, b[i]))%mod;
		}

		vector <int> v;
		for(int i=0; i<p; i++) {
			int cHash = 0;

			for(int j=0; j<g[i].size(); j++) {
				cHash = (cHash + bigMod(seed, g[i][j].fi) ) % mod;

				if(j >= m) {
					cHash = (cHash - bigMod(seed, g[i][j-m].fi) + mod) % mod;
				}

				if(j >= m - 1) {
					if(cHash == hash) {
						v.pb(g[i][j - m + 1].se);
					}
				}
			}

			g[i].clear();
		}

		sort(v.begin(), v.end());

		cout << v.size() << endl;
		for(auto u: v) cout << u << " ";
		cout << endl;
	}
	return 0;
}
