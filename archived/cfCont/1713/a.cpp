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

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	si(t);
	while(t--) {
		int n;
		si(n);
		int minX = 0, minY = 0, maxX = 0, maxY = 0;
		for(int i=1; i<=n; i++) {
			int x, y;
			si(x); si(y);

			minX = min(minX, x);
			minY = min(minY, y);

			maxX = max(x, maxX);
			maxY = max(y, maxY);
		}
		printf("%d\n", (-minX-minY+maxX+maxY)*2);
	}
	return 0;
}
