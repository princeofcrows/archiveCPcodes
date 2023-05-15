#include <bits/stdc++.h>

using namespace std;

#define mx 300005
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


int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		int n;
		cin >> n;
		for(int i=1; i<=n; i++) {
			cin >> a[i];
		}

		for(int i=1; i<=n; i++) {
			cin >> b[i];
		}

		vector <int> res;
		sort(a+1, a+n+1);
		int ans = 1;

		for(int i=1; i<=n; i++) {
			int x = upper_bound(a+1, a+n+1, b[i]) - (a + 1);
			res.pb(n - x);
		}

		sort(res.begin(), res.end());

		for(int i=0; i<n; i++) {
			ans = (ans * (res[i] - i)) % mod;
		}
		cout << ans << "\n";

	}

	return 0;
}
