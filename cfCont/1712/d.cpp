#include <bits/stdc++.h>

using namespace std;

#define mx 400005
//#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 1000000000
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ara[mx];

void solve(int n, int k) {
	int mm = mod;
	if( n == k ) {
		printf("%d\n", mm);
		return;
	}

	set <int> l, r;
	map <int, int> lm, rm;
	int ans = 0, td = mod, ta = 0;

	for(int i=0; i<n; i++) {
		ta = max(ta, ara[i]);
		td = min(td, ara[i]);
	}

	if(k == 1) {
		printf("%d\n", min(ta, td*2));
		return;
	}

	for(int i=k; i<n; i++) {
		r.insert(ara[i]);
		rm[ara[i]]++;

	}

	ans = ta;
	int temp = (*r.begin());
	ans = max(ans, temp*2);

	for(int i=0,j=k; j<=n; i++,j++) {
		l.insert(ara[i]);
		lm[ara[i]]++;


		rm[ara[j]]--;

		if(!rm[ara[j]]) {
			r.erase(ara[j]);
		}

		int x = (*l.begin());
		int y;
		if(j == n) y = mm;
		else y = (*r.begin());
		int z = min(x, y)*2;

		ans = max(ans, z);
	}

	printf("%d\n", min(ans, mm));
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	si(t);
	while(t--) {
		int n, k;
		si(n); si(k);

		for(int i=0; i<n; i++) {
			si(ara[i]);
		}

		solve(n, k);
	}
	return 0;
}
