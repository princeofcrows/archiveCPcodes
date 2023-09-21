#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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

int ara[mx], cu[mx];


int32_t main(){
	//read();
	//write();
	fst;

	int t;
	cin >> t;

	while(t--) {
		int n, k, ans = 0;
		cin >> n >> k;
		for(int i=1; i<=n; i++) {
			cin >> ara[i];
			cu[i] = !(ara[i]*2 > ara[i-1]);
			cu[i] += cu[i-1];
		}
		for(int i=1; i<=n; i++) {
			int l = i;
			int r = i + k;
			if(r > n) break;
			if(cu[r] - cu[l] == 0) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
