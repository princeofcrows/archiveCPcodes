#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

int a[mx];

int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}

bool isAlready(int n) {
	for(int i=0, j=n-1; i<=j; i++, j--) {
		if(a[i] != a[j]) return false;
	}

	return true;
}

int solve(int n) {
	int ans = 0;
	for(int i=0, j=n-1; i<j; i++, j--) {
		int aMx = max(a[i], a[j]);
		int aMn = min(a[i], a[j]);
		ans = gcd(ans, (aMx - aMn));
	}

	return ans;
}

int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		int n;
		cin >> n;


		for(int i=0; i<n; i++) {
			cin >> a[i];
		}

		if(isAlready(n)) {
			cout << 0 << "\n";
		} else {
			cout << solve(n) << "\n";
		}
	}

	return 0;
}
