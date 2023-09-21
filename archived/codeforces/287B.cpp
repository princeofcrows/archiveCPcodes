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

bool calc(int n, int k, int s){
	int tot = k * (k + 1) / 2 - (s * (s + 1)) / 2;

	if(tot >= n - 1) return true;

	return false;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, k;

	while(cin >> n >> k) {
		int low = 1, high = k - 1;

		if(!calc(n, k-1, 0)) {
			cout << -1 << "\n";
			continue;
		}

		while(low <= high) {
			int mid = (low + high) / 2;

			if(calc(n, k -1, mid)) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}

		cout << k - high - 1 << "\n";
	}
	return 0;
}
