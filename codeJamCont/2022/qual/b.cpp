#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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
int col[4][4];

void solve(){
	int const_c = 1000000;
	int ans = 0;

	std::vector<int> res;

	for(int i=0; i<4; i++) {
		int u = mod;
		for(int j=0; j<3; j++) {
			u = min(u, col[i][j]);
		}
		if(ans + u > const_c) {
			res.pb(const_c - ans);
			ans = const_c;
		} else {
			ans += u;
			res.pb(u);
		}
	}

	if(ans != const_c) {
		cout << " IMPOSSIBLE\n";
		return;
	}

	for(auto u: res) {
		cout << " " << u;
	}

	cout << endl;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		for(int i=0; i<3; i++) {
			cin >> col[0][i] >> col[1][i] >> col[2][i] >> col[3][i];
		}

		cout << "Case #" << cs++ <<":";
		solve();
	}
	return 0;
}
