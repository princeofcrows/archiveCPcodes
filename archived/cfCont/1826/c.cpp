#include <bits/stdc++.h>

using namespace std;

#define mx 1000005
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
std::vector<int> g[mx];

int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}

void find() {
	for(int i=2; i<mx; i++) {
		for(int j=i; j<mx; j+=i) g[j].pb(i);
	}
}

int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	find();
	while(q--) {
		int n, m;
		cin >> n >> m;

		bool flag = true;
		for(auto u: g[n]) {
			if(u <= m ) {
				flag = false;
				break;
			}
		}

		cout << (flag ? "Yes\n" : "No\n");
	}

	return 0;
}
