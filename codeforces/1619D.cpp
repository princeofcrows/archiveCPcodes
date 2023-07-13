#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

vector <int> g[mx];

bool check(int m, int n, int a) {
	for(int i=0; i<n; i++) {
		bool fl = false;
		for(int j=0; j<m; j++) {
			if(g[j][i] >= a) {
				fl = true;
				break;
			}
		}

		if(!fl) return false;
	}


	for(int j=0; j<m; j++) {
		int cnt = 0;
		for(int i=0; i<n; i++) {
			if(g[j][i] >= a) {
				cnt++;
			}
		}

		if(cnt >= 2) return true;
	}

	return false;
}

int32_t main(){
	read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> m >> n;

		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				int a;
				cin >> a;
				g[i].pb(a);
			}
		}

		int l = 0, h = mod;

		while(l<= h) {
			int mid = (l+h) / 2;

			if(check(m, n, mid)) {
				l = mid + 1;
			} else {
				h = mid - 1;
			}
		}

		cout << h << endl;

		for(int i=0; i<m; i++) {
			g[i].clear();
		}
	}

	return 0;
}
