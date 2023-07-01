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

map <int, int> mp[2005][2], vis[2005][2];
int n;
vector<pii> v;

int dp(int idx, int lm, int tk) {
	if(idx >= n) return 0;
	if(vis[idx][tk][lm]) return mp[idx][tk][lm];

	int ret = 0;

	if(v[idx].fi > lm) {
		ret = dp(idx+1, v[idx].se, 1);
		ret = max(ret, dp(idx+1, lm, 0));
	} else {
		if(tk) {
			ret = dp(idx+1, max(v[idx].se, lm), 0) + 2;
			ret = max(ret, dp(idx+1, lm, 1));
		} else {
			ret = dp(idx+1, lm, 0);
			ret = max(ret, dp(idx+1, max(v[idx].se, lm), 0));
		}
	}

	vis[idx][tk][lm] = true;
	return mp[idx][tk][lm] = ret;
}

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i=0; i<n; i++) {
			int a, b;
			cin >> a >> b;

			v.pb({a, b});
		}

		sort(v.begin(), v.end());
		//for(auto u:v) cout << u.fi << " " << u.se <<endl;

		cout << n - dp(0, -1, 0) << endl;

		for(int i=0; i<2004; i++) {
			for(int j=0; j<2; j++) {
				mp[i][j].clear();
				vis[i][j].clear();
			}
		}

		v.clear();
	}
	return 0;
}
