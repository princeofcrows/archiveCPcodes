#include <bits/stdc++.h>

using namespace std;

#define mx 400005
#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 998244353
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<pii> v;

int isRowOrCol(int n, int m) {
	set <int> col, row;
	map <int, int> colCount, rowCount;
	int differentColors = 0;

	for(int i=(int) (v.size() - 1); i>=0; i--) {
		col.insert(v[i].se);
		row.insert(v[i].fi);

		if(!colCount[v[i].se] || !rowCount[v[i].fi]) {
			differentColors++;
		}

		colCount[v[i].se]++;
		rowCount[v[i].fi]++;

		if((int)row.size() == n) {
			break;
		} else if((int)col.size() == m) {
			break;
		}
	}

	return differentColors;
}

int solve(int n, int m, int k) {
	int spec = isRowOrCol(n, m);
	int ans = 1;

	for(int i=0; i<spec; i++) {
		ans = (ans * k) %mod;
	}

	return ans;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	cin >> t;

	while(t--) {
		int n, m, k, q;
		cin >> n >> m >> k >> q;

		for(int i=0; i<q; i++) {
			int x, y;
			cin >> x >> y;
			v.pb({x, y});
		}

		cout << solve(n, m, k) << endl;

		v.clear();
	}
	return 0;
}
