#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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

	int n, q;
	while(cin >> n >> q) {
		for(int i=1; i<=n; i++) cin >> ara[i];

		std::vector<int> v;
		for(int i=3; i<=n; i++) {
			if(ara[i-2] >= ara[i-1] && ara[i-1] >= ara[i]) {
				v.pb(i-2);
			}
		}

		while(q--) {
			int l, r;
			cin >> l >> r;

			int len = r - l + 1;
			if (len < 3) {
				cout << len << "\n";
				continue;
			}

			int i = lower_bound(v.begin(), v.end(), l) - v.begin();
			int j = upper_bound(v.begin(), v.end(), r) - v.begin();

			while(j-1>=0 && v[j-1] + 2 > r) j--;

			cout << len - (j - i) << "\n";
		}
	}

	return 0;
}
