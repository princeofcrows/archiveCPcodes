#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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

bool check(int x, int y, int sx, int sy, int d) {
	return (abs(x - sx) + abs(y - sy)) > d;
}


int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		int n, m, sx, sy, d;
		cin >> n >> m >> sx >> sy >> d;

		bool path1 = check(sx, 1, sx, sy, d) && check(n, sy, sx, sy, d);
		bool path2 = check(1, sy, sx, sy, d) && check(sx, m, sx, sy, d);
		int ans = (m + n - 2);

		if(path1 || path2) cout << ans << "\n";
		else cout << "-1\n";
	}
	return 0;
}
