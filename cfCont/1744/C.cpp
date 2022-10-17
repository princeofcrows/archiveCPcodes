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
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n;
		string str, ch;
		map <char, vector<int> > mp;

		cin >> n >> ch >> str;

		for(int i=0; i<n; i++) {
			mp[str[i]].pb(i);
		}

		int ans = 0;

		for(auto u: mp[ch[0]]) {
			int idx = lower_bound(mp['g'].begin(), mp['g'].end(), u) - mp['g'].begin();

			if(idx >= mp['g'].size()) {
				int lat = mp['g'][0] + n;
				ans = max(ans, lat - u);
			} else {
				int lat = mp['g'][idx];
				ans = max(ans, lat - u);
			}
		}

		cout << ans << "\n";
	}
	return 0;
}
