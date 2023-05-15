#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

int a[mx], b[mx], ara[mx];

int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		int n, ans = -mod;
		cin >> n;

		for(int i=1; i<=n; i++) {
			cin >> ara[i];
		}

		a[0] = -mod;
		for(int i=1; i<=n; i++) {
			a[i] = ara[i] + i;
			a[i] = max(a[i], a[i-1]);
		}

		b[n+1] = -mod;
		for(int i=n; i>=1; i--) {
			b[i] = ara[i] - i;
			b[i] = max(b[i], b[i+1]);
		}

		for(int i=2; i<n; i++) {
			ans = max(ans, a[i-1] + ara[i] + b[i+1]);
		}

		cout << ans << endl;
	}
	return 0;
}
