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



int32_t main(){
	read();
	//write();
	fst;

	int t;
	cin >> t;
	while(t--) {
		int n, k, x;

		cin >> n >> k >> x;

		if(n%2) {
			if(x == 1) {
				if(n == 1) cout << "NO\n";
				else {
					cout << "YES\n";
					cout << 1 + (n - 3) / 2 << "\n";
					cout << 3 << " ";
					for(int i=1; i<=(n - 3) / 2; i++) {
						cout << 2 << " ";
					}
				}
			} else {
				cout << "YES\n";
				cout << n << "\n";

				for(int i=1; i<=n; i++) {
					cout << 1 << " ";
				}
			}
		} else {
			if(x == 2) {
				cout << "YES\n";
				cout << n << "\n";

				for(int i=1; i<=n; i++) {
					cout << 1 << " ";
				}
			} else {
				cout << "YES\n";
				cout << n/2 << "\n";

				for(int i=1; i<=n/2; i++) {
					cout << 2 << " ";
				}
			}
		}
	}
	return 0;
}
