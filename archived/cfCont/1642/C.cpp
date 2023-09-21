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

int ara[mx];
set <int> s;
map <int, int> mp;

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	cin >> t;

	while(t--) {
		int n, x;
		cin >> n >> x;
		for(int i=0; i<n; i++) {
			cin >> ara[i];
			s.insert(ara[i]);
			mp[ara[i]]++;
		}

		int ans = 0;
		for(auto u: s) {
			while(mp[u]) {
				int y = x * u;
				if(mp[y]) mp[y]--;
				else ans++;

				mp[u]--;
			}
		}
		cout << ans << endl;

		mp.clear();
		s.clear();
	}
	return 0;
}
