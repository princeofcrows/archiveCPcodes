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

int ara[mx];

int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		int n, m;
		cin >> n;
		m = n;

		for(int i=1; i<=m; i++) {
			cin >> ara[i];
			if(i > 1 && ara[i] == ara[i-1]) {
				i--;
				m--;
			}
		}

		int ans = min(2LL, m);
		for(int i=3; i<=m; i++) {
			if(ara[i] >= ara[i-1] && ara[i-1] >= ara[i-2]) continue;
			if(ara[i] <= ara[i-1] && ara[i-1] <= ara[i-2]) continue;

			ans++;
		}

		cout << ans  << endl;

	}

	return 0;
}
