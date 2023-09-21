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

int ara[mx], a[mx], sum[mx], z[mx];

int32_t main(){
	//read();
	//write();
	int n, q;

	while(cin >> n >> q) {
		for(int i=1; i<=n; i++) {
			cin >> a[i];
			ara[i] = ara[i-1] ^ a[i];
			sum[i] = sum[i-1] + a[i];
			z[i] = (a[i] == 0);
			z[i] += z[i-1];
		}

		while(q--) {
			int l, r;
			cin >> l >> r;
			int d = r - l + 1;

			if(d == 1) {
				if(a[l] == 0) cout << "0\n";
				else cout << -1 << "\n";
			} else if(d == 2) {
				if(a[l] == 0 && a[r] == 0) cout << "0\n";
				else cout << -1 << "\n";
			} else {
				int x = ara[r] ^ ara[l-1];
				//cout << x << endl;

				if(x != 0) cout << -1 << "\n";
				else if(d%2) {
					if(sum[r] - sum[l-1] == 0) cout << "0\n";
					else cout << 1 << "\n";
				}
				else {
					if(sum[r] - sum[l-1] == 0) cout << "0\n";
					else {
						if(a[l] == 0 || a[r] == 0) cout << "1\n";
						//else if(z[r] - z[l-1] == 0) cout << -1 << "\n";
						else cout << 2 << "\n";
					}
				}
			}
		}

	}
	return 0;
}
