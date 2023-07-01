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

int a[3][mx];

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;

		int ans = 0;
		for(int j=0; j<3; j++) {
			bool f = true;
			for(int i=0; i<n; i++) {
				cin >> a[j][i];

				if(!f) continue;

				int t_x = a[j][i] | ans;
				if((t_x | x) == x) {
					ans = t_x;
				} else {
					f = false;
				}
			}
		}

		if(ans == x) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
