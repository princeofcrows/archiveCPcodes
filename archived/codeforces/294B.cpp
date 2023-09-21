#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

int32_t main(){
	//read();
	//write();
	int n;
	while(cin >> n ) {
		vector<int> v[2];

		int t_w = 0, ans = 0;

		for(int i=0; i<n; i++) {
			int t, w;
			cin >> t >> w;
			v[t-1].pb(w);

			t_w += w;
			ans += t;
		}

		for(int i=0; i<2; i++) {
			sort(v[i].rbegin(), v[i].rend());
		}

		int rest = 0;
		for(int j=0; j<v[1].size(); j++) {
			rest += v[1][j];

			if(t_w - rest <= 2+j*2) {
				ans = min(ans, 2+j*2);
			}
		}

		for(int i=0; i<v[0].size(); i++) {
			t_w -= v[0][i];

			int temp = 0;

			if(t_w <= (i+1)) ans = min(ans, i+1);
			for(int j=0; j<v[1].size(); j++) {
				temp += v[1][j];

				if(t_w - temp <= i+3+j*2) {
					ans = min(ans, i+3+j*2);
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}
