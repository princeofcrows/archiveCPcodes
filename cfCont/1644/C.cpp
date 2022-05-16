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

int ara[5005], res[5005];

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	cin >> t;

	while(t--) {
		int n, x; cin >> n >> x;

		for(int i=1; i<=n; i++) {
			cin >> ara[i];
			ara[i] += ara[i-1];
		}

		mem(res, 0);
		for(int i=1; i<=n; i++) {
			int ans = -inf;
			for(int j=i; j<=n; j++) {
				ans = max(ans, ara[j] - ara[j-i]);
			}

			for(int k=0; k<=i; k++) {
				res[k] = max(res[k], ans + x * k);
			}

			for(int k=i+1; k<=n; k++) {
				res[k] = max(res[k], ans + x * i);
			}
		}

		for(int i=0; i<=n; i++) {
			cout << res[i] << " ";
		} cout << endl;

	}
	return 0;
}
