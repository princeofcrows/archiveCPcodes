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

int ara[mx];

bool check(int n, int m, int k) {
	int tot = 0, f = 0;
	for(int i=0; i<k; i++) {
		int a = ara[i] / m;
		if(a > 1) tot += a;
		if(a > 2) f = 1;
	}

	if(n%2 == 1) {
		if(f == 0) return false;
	}

	return tot >= n;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	sil(t);
	while(t--) {
		int n, m, k;
		sil(n); sil(m); sil(k);

		for(int i=0; i<k; i++) {
			sil(ara[i]);
		}

		if(check(n, m, k) || check(m, n, k)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
