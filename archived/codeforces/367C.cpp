// unsolved

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

vector <int> v;

int32_t main(){
	//read();
	//write();
	fst;
	int n, m;

	while(cin >> n >> m) {

		for(int i=0; i<m; i++) {
			int q, w;
			cin >> q >> w;
			v.pb(w);
		}

		sort(v.rbegin(), v.rend());

		int lim = 0;
		for(int i=0; i<m; i++) {
			int tot = ((lim+1) * lim) / 2 + ((lim+1)%2 ? 0 :(lim + 1) / 2 - 1);
			if(tot > n - 1 ) {
				break;
			}

			lim++;
		}

		int ans = 0;
		for(int i=0; i<lim; i++) ans += v[i];
		cout << ans << endl;

		v.clear();
	}

	return 0;
}
