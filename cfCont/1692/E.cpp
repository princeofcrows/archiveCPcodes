#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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

int32_t main(){
	//read();
	//write();
	fst;

	int t;
	cin >> t;

	while(t--) {
		int n, s;
		cin >> n >> s;

		for(int i=1; i<=n; i++) {
			cin >> ara[i];
			ara[i] += ara[i-1];
		}

		int ans = mx;

		for(int i=1; i<=n; i++) {
			int x = ara[i-1] + s;
			int idx = upper_bound(ara+i, ara+n+1, x) - ara;

			if(idx-1 <= n && idx>0 && ara[idx-1] ==x) {
				ans = min(ans, i+n-idx);
			}
		}

		cout << (ans == mx ? -1 : ans ) << endl;
	}
	return 0;
}
