#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

string a[35], b[35], c[35];

void shift(int s, int t, int n) {
	for(int i=0; i<s; i++) {
		c[i] = a[n - s+i];
	}

	for(int i=s; i<n; i++) {
		c[i] = a[i - s];
	}

	for(int i=0; i<t; i++) {
		for(int j=0; j<n; j++) {
			c[j].pb(c[j][0]);
			c[j].erase(c[j].begin());
		}
	}
}

bool check(int n) {
	for(int i=0; i<n; i++) if(c[i] != b[i]) return false;

	return true;
}


string solve(int n, int m) {
	for(int j=0; j<n; j++) {
		for(int i=0; i<m; i++) {
			shift(j, i, n);

			if(check(n)) return "Yes\n";
		}
	}

	return "No\n";
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, m;
	while(cin >> n >> m) {
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}

		for(int i=0; i<n; i++) {
			cin >> b[i];
		}

		cout <<  solve(n, m);
	}
	return 0;
}
