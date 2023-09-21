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

double test() {
	long long ans = 0.0;

	for(int i=1; i<=100; i++) {
		double d = i * 1.0;
		long long t = ceil(100000000.0 / d);
		ans += t;
	}

	return ans;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, n;
	cin >> t >> n;

	while(t--) {
		for(int i=1; i<=n-1; i++) {
			cout << "M " << i << " " << n << endl;

			int j, idf; cin >> j;
			if(j == i) continue;

			cout << "S " << i << " " << j << endl;
			cin >> idf;

			if(idf!=1) return 0;
		} cout << "D" << endl;

		int f; cin >> f;

		if(f == -1) break;
	}
	return 0;
}
