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

int a[mx], b[mx], res[mx];
bool id[mx];

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		for(int i=0; i<n; i++) {
			cin >> a[i];
			id[i] = false;
			id[i+1] = false;
		}

		for(int i=0; i<n; i++) {
			cin >> b[i];
		}

		for(int i=0; i<n; i++) {
			int idx = lower_bound(b, b+n, a[i]) - b;
			cout << b[idx] - a[i] << " ";

			if(i && a[i]<= b[i-1]) id[i] = true;
			else id[i] = false;
		} cout << "\n";

		int l = 0;

		for(int i=0; i<n; i++) {
			l = max(l, i);
			while(id[l+1]) l++;

			cout << b[l] - a[i] << " ";
		}

		cout << "\n";
	}
	return 0;
}
