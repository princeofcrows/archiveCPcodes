#include <bits/stdc++.h>

using namespace std;

#define mx 2000005
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

int ara[mx];

int32_t main(){
	//read();
	//write();
	fst;
	int n_4;

	while(cin >> n_4) {
		for(int i=1; i<=n_4; i++) {
			cin >> ara[i];
		}

		sort(ara + 1, ara + n_4 + 1);

		for(int i=1; i<=n_4; i++) {
			ara[i] += ara[i-1];
		}

		int ans = 0;
		int sz = 1;

		while(sz <= n_4) {
			int taken = n_4 / sz;
			ans += ara[n_4] - ara[n_4-taken];

			sz *= 4;
		}

		cout << ans << "\n";
	}
	return 0;
}
