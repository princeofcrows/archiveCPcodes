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

int sum[1005][1005];

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n, q;
		cin >> n >> q;
		mem(sum, 0);

		for(int i=0; i<n; i++) {
			int h, w;
			cin >> h >> w;

			sum[h][w] += h*w;
		}

		for(int i=1; i<1002; i++) {
			for(int j=1; j<1002; j++) {
				sum[i][j] += (sum[i][j-1]);
			}
			for(int j=1; j<1002; j++) {
				sum[i][j] += (sum[i-1][j]);
			}
		}

		while(q--) {
			int hs, ws, he, we;
			cin >> hs >> ws >> he >> we;

			cout << sum[he-1][we-1] - sum[he-1][ws] - sum[hs][we-1] + sum[hs][ws] << "\n";
		}

	}
	return 0;
}
