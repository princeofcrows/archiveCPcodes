#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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

int solve(vector<int> v) {
	int l = ((int)(v.size()) - 1);
	int ans = 0, cur = -1;

	for(int i=0; i<v.size(); i++) {
		if(i > l) break;

		while(l >= i && v[i] >= v[l]) {
			if(v[l] >= cur) {
				ans++;
				cur = max(cur, v[l]);
			}
			l--;
		}

		if(i > l) break;
		if(v[i] >= cur) ans++;
		cur = max(cur, v[i]);
	}

	return ans;
}


int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<int> v;
		for(int i=0; i<n; i++) {
			int a;
			cin >> a;
			v.pb(a);
		}
		cout << "Case #" << cs++ <<": " << solve(v) << "\n";

	}
	return 0;
}
