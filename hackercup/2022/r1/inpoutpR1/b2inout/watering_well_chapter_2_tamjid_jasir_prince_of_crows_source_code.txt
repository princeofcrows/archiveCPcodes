#include <bits/stdc++.h>

using namespace std;

#define mx 5000005
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
#define read() freopen("watering_well_chapter_2_input.txt", "r", stdin)
#define write() freopen("watering_well_chapter_2_output.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

pii tree[mx], well[mx];

int32_t main(){
	read();
	write();
	fst;
	int t, cs = 1;
	cin >> t;
	while(t--) {
		int n, q;
		cin >> n;

		int x2 = 0, y2 = 0, xx = 0, yy = 0;
		for(int i=0; i<n; i++) {
			cin >> tree[i].fi >> tree[i].se;

			x2 = (x2 + tree[i].fi * tree[i].fi) % mod;
			y2 = (y2 + tree[i].se * tree[i].se) % mod;

			xx = (xx + tree[i].fi) % mod;
			yy = (yy + tree[i].se) % mod;
		}

		cin >> q;
		int ans = 0;

		for(int i=0; i<q; i++) {
			cin >> well[i].fi >> well[i].se;

			int wx2 = ( well[i].fi * well[i].fi) % mod;
			int wy2 = ( well[i].se * well[i].se) % mod;

			ans = (ans + x2 + n*wx2 - (2*xx*well[i].fi)%mod + mod) % mod;
			ans = (ans + y2 + n*wy2 - (2*yy*well[i].se)%mod + mod) % mod;
		}

		cout << "Case #" << cs++ <<": " << ans << endl;
	}
	return 0;
}
