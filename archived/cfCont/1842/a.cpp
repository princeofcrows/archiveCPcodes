#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

int a[mx], b[mx];

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		int sa = 0, sb = 0;
		for(int i=0; i<n; i++) {
			cin >> a[i];
			sa += a[i];
		}

		for(int i=0; i<m; i++) {
			cin >> b[i];
			sb += b[i];
		}

		if(sa == sb) {
			cout << "Draw\n";
		} else if(sa > sb) {
			cout << "Tsondu\n";
		}else {
			cout << "Tenzing\n";
		}
	}
	return 0;
}
