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

int ara[mx];

int getMaxRoot(int n) {
	for(int i=0; i<=n; i++) {
		if(i*i >= n) return i;
	}

	return -1;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t;
	si(t);
	while(t--) {
		int n;
		si(n);

		for(int i=0; i<n; i++) {
			ara[i] = -1;
		}

		int m = getMaxRoot(n);

		for(int i=m; i>=0; i--) {
			for(int j=0; j<=(i * i); j++) {
				int a = j;
				int b = i*i - j;

				if(a >= n || b >= n) continue;
				if(ara[a] != -1 || ara[b] != -1) continue;

				ara[a] = b;
				ara[b] = a;
			}
		}

		bool f = true;
		for(int i=0; i<n; i++) {
			if(ara[i] == -1) f = false;
		}

		if(!f) {
			printf("-1\n");
		}
		else {
			for(int i=0; i<n; i++) {
				printf("%d ", ara[i]);
			} printf("\n" );
		}

	}
	return 0;
}
