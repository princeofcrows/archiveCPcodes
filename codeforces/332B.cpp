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

int ara[mx], cu[mx];

int32_t main(){
	//read();
	//write();
	fst;
	int n, k;

	while(cin >> n >> k) {
		for(int i=1; i<=n; i++) {
			cin >> ara[i];
			ara[i] += ara[i-1];
		}

		set <pii> st;
		for(int i=1; i<=n-k+1; i++) {
			st.insert({ara[i-1] - ara[i+k-1], i});
			cu[i] = ara[i-1] - ara[i+k-1];
		}

		int low = 1, max_op = 0, a = -1, b = -1;
		for(int i=1; i<=n-k; i++) {
			int to = i + k - 1;

			while(low <= to) {
				st.erase({cu[low], low});
				low++;
			}

			int tot = -cu[i] - (*st.begin()).fi;

			if(tot > max_op) {
				max_op = tot;
				a = min(i, (*st.begin()).se );
				b = max(i, (*st.begin()).se );
			}

			int ins = i - k + 1;
			if(ins > 0) {
				st.insert({cu[ins], ins});
			}
		}

		cout << a << " " << b << "\n";

	}
	return 0;
}
