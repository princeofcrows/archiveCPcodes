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
		int n;
		cin >> n;
		for(int i=1; i<=n; i++) {
			cin >> ara[i];
		}

		int ans = 0;
		for(int i=1; i<=n; i++) {
			vector <pii> v;

			for(int j=i; j<=n; j++) {
				pii prev = {ara[j], ara[j]};

				while(!v.empty()) {
					if(v.back().fi > ara[j]) {
						prev = {ara[j], max(prev.se, v.back().se)};
						v.pop_back();
					} else if(v.back().fi < ara[j] && v.back().se > ara[j]) {
						prev = {v.back().fi, max(prev.se, v.back().se)};
						v.pop_back();
						break;
					} else {
						break;
					}
				}

				v.push_back(prev);

				ans += (j - i + 1LL - ((int) v.size()));
			}
		}

		cout << ans << "\n";

	}

	return 0;
}
