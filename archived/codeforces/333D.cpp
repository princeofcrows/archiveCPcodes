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

int ara[1004][1004];
vector <piii> v;
bool vis[1004][1004];

int32_t main(){
	//read();
	//write();
	fst;
	int n, m;

	while(cin >> n >> m) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin >> ara[i][j];
				v.pb({ara[i][j], {i, j}});
			}
		}

		int ans = -1;
		sort(v.rbegin(), v.rend());
		mem(vis, false);

		for(int i=0; i<v.size(); i++) {
			for(int j=0; j<i; j++) {
				if(v[i].se.fi == v[j].se.fi || v[j].se.se == v[i].se.se) {
					continue;
				}

				int r1 = v[i].se.fi, r2 = v[j].se.fi;
				int c1 = v[i].se.se, c2 = v[j].se.se;

				if(vis[r1][c2] && vis[r2][c1]) {
					ans = v[i].fi;
					break;
				}
			}

			if(ans != -1) break;
			vis[v[i].se.fi][v[i].se.se] = true;
		}

		cout << ans << endl;
		v.clear();
	}
	return 0;
}
