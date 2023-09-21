#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

int a[mx], b[mx];
int sum[2][mx], cnt[2];

bool check(int N,int pos){
	return (bool)(N & (1<<pos));
}

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n, m;
		cin >> n >> m;
		mem(cnt, 0);

		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) {
			cin >> b[i];
			b[i]--;

			sum[b[i]][cnt[b[i]]] = a[i];
			cnt[b[i]]++;
		}

		for(int i=0; i<2; i++) {
			sort(sum[i], sum[i] + cnt[i]);
			reverse(sum[i], sum[i] + cnt[i]);

			for(int j=1; j<cnt[i]; j++) sum[i][j] += sum[i][j-1];
		}

		int ans = (lower_bound(sum[1], sum[1] + cnt[1], m) - sum[1]);
		if(ans >= cnt[1]) ans = mod;
		else ans = (ans + 1)*2;

		for(int i=0; i<cnt[0]; i++) {
			int need = m - sum[0][i];
			if(need <= 0) ans = min(ans, i+1);
			else {
				int idx = lower_bound(sum[1], sum[1] + cnt[1], need) - sum[1];

				if(idx >= cnt[1]) continue;
				ans = min(ans, i + 3 + idx*2);
			}
		}

		if(ans == mod) ans = -1;
		cout << ans << endl;

	}
	return 0;
}
