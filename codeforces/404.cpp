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

int d[mx];
std::vector<int> g[mx];
std::vector<pii> res;
int cnt[mx];

int getZeroIndx(int n) {
	int idx = -1;
	for(int i=1; i<=n; i++) {
		if(d[i] == 0) {
			if(idx != -1) return -1;
			idx = i;
		}
	}

	return idx;
}

int solve(int n, int s, int k) {
	std::vector<int> prev;
	prev.pb(s);
	set<int> st;
	mem(cnt, 0);

	for(int i=1; i<=n; i++) {
		int idx = 0;

		for(auto u: g[i]) {
			if(prev.size() == 0) return -1;

			res.pb({prev[idx], u});
			if(res.size() > 1000000) return -1;

			cnt[prev[idx]]++;
			cnt[u]++;

			idx = (idx + 1) % (prev.size());
		}

		for(int j=0; j<prev.size(); j++) {
			int u = prev[j];
			if(cnt[u] > k) return -1;
		}

		prev = g[i];
	}

	for(auto u: prev) if(cnt[u] > k) return -1;

	return 1;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, k;
	while(cin >> n >> k) {
		for(int i=1; i<=n; i++) {
			cin >> d[i];
			g[d[i]].pb(i);
		}

		int start = getZeroIndx(n);

		if(start == -1) {
			cout << -1 << endl;
		} else if(solve(n, start, k) == -1) {
			cout << -1 << endl;
		} else {
			cout << res.size() << endl;
			for(auto u: res) cout << u.fi << " " << u.se << "\n";
		}

		for(int i=0; i<=n; i++) g[i].clear();
		res.clear();
	}
	return 0;
}
