#include <bits/stdc++.h>

using namespace std;

#define mx 5005
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

int ara[mx];
map< int, vector<int> > mp;
std::vector<int> v;
int dp[mx][mx];

int init(int i, int j, int idx) {
	if(i > j) return 0;
	if(idx == v.size()) return 0;
	if(dp[i][j] != -1) return dp[i][j];

	int ret = j - i + 1, ret2 = 0;
	int co = v[idx];
	if(idx) co -= v[idx - 1];

	for(int l=0; l<mp[v[idx]].size(); l++) {
		if(l == 0) {
			int x = min(mp[v[idx]][l] - 1, j);
			if(x < i) continue;
			ret2 += init(i, x, idx+1);
		}  else {
			int x = max(mp[v[idx]][l-1] + 1, i);
			if(x > j) continue;

			int y = min(mp[v[idx]][l] - 1, j);
			if(y < i) continue;

			ret2 += init(x, y, idx+1);
		}
	}

	int x = max(mp[v[idx]].back() + 1, i);
	if(!(x > j))
		ret2 += init( x, j, idx+1);

	//cout << i << " " << j << " " << idx << " " << ret  << " " <<ret2 << endl;

	return dp[i][j] = min(ret, ret2 + co);
}


int32_t main(){
	//read();
	//write();
	fst;
	int n;
	while(cin >> n) {
		for(int i=1; i<=n; i++) {
			cin >> ara[i];
			if(mp[ara[i]].size() == 0) {
				v.pb(ara[i]);
			}
			mp[ara[i]].pb(i);
		}

		sort(v.begin(), v.end());
		mem(dp, -1);

		cout << init(1, n, 0) << endl;

		for(auto u: v) mp[u].clear();
		v.clear();
	}
	return 0;
}
