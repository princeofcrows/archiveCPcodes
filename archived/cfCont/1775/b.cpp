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

vector <int> v[mx];
map <int, int> mp;


bool solve(int n) {
	for(int i=0; i<n; i++) {
		bool flag = true;

		for(auto u: v[i]) {
			if(mp[u] == 1) {
				flag = false;
				break;
			}
		}

		if(flag) return true;
	}

	return false;
}

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		for(int i=0; i<n; i++) {
			int k;
			cin >> k;

			for(int j=0; j<k; j++) {
				int p;
				cin >> p;
				v[i].pb(p);

				mp[p]++;
			}
		}

		cout << (solve(n) ? "YES" : "NO") << endl;

		for(int i=0; i<n; i++) {
			v[i].clear();
		}

		mp.clear();
	}
	return 0;
}