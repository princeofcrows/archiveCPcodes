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

int ara[mx];
vector <int> mp[mx*10];
set <int> st;

int32_t main(){
	//read();
	//write();
	fst;
	int n;

	while(cin >> n) {
		int ans = 0;

		for(int i=0; i<n; i++) {
			cin >> ara[i];
			st.insert(ara[i]);
			mp[ara[i]].pb(i);
		}

		for(auto u: st) {
			ans = max(ans, ((int) (mp[u].size())));

			for(auto p: st) {
				if(p == u) continue;

				int last = mp[u][0], cnt = 1, id = 1;

				for(auto v: mp[p]) {
					if(v > last) {
						cnt++;
						last = mod;

						while(id < mp[u].size()) {
							if(mp[u][id] > v) {
								last = mp[u][id];
								cnt++;
								break;
							}
							id++;
						}
					}
				}

				ans = max(ans, cnt);
			}
		}

		cout << ans << "\n";

		for(int i=0; i<mx*10; i++) mp[i].clear();
	}
	return 0;
}
