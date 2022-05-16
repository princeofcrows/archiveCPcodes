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

set <int> s;
map <int, int> mp;

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		for(int i=0; i<n; i++) {
			int a;
			cin >> a;
			s.insert(a);
			mp[a]++;
		}

		int ans = 0;
		for(auto u: s) {
			ans = min(u, ans + mp[u]);
		}

		cout << "Case #" << cs++ <<": " << ans << endl;

		s.clear();
		mp.clear();


	}
	return 0;
}
