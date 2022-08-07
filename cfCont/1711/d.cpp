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

piii xp[mx];
int sum[mx], res[mx];


void gen(int n, int m){
	priority_queue <int>q;
	vector<int> v;
	sort(xp, xp+n);
	int tot = 0;

	for(int i=0; i<n; i++) {
		sum[i] = 0;
	}

	for(int i=0; i<n; i++) {
		while(!q.empty()) {
			int x = q.top();
			if(x + xp[i].se.fi <= 0) {
				q.pop();
			} else break;
		}

		tot -= q.size();
		tot += xp[i].se.fi;
		sum[i] += tot;
		q.push(xp[i].fi - xp[i].se.fi);
	}

	while(!q.empty()) {
		q.pop();
	}
	tot = 0;

	for(int i=n-1; i>=0; i--) {
		while(!q.empty()) {
			int x = q.top();
			if(x - xp[i].se.fi <= 0) {
				q.pop();
			} else break;
		}

		tot -= q.size();
		tot += xp[i].se.fi;
		sum[i] += tot;
		q.push(xp[i].fi + xp[i].se.fi);
	}

	for(int i=0; i<n; i++) {
		if(sum[i] > m) v.push_back(xp[i].fi);
		cout << sum[i] << " ";
	}

	for(int i=0; i<n; i++) {
		if(v.empty()) {
			res[xp[i].se.se] = 1;
			continue;
		}

		int left = xp[i].se.fi - xp[i].fi - 1;
		int right = xp[i].se.fi + xp[i].fi - 1;

		if(left <= v.front() && right >= v.back()) {
			res[xp[i].se.se] = 1;
		} else {
			res[xp[i].se.se] = 0;
		}
	}

	for(int i=0; i<n; i++) {
		printf("%lld", res[i]);
	} printf("\n");

}

int32_t main(){
	read();
	//write();
	//fst;
	int t;
	sil(t);
	while(t--) {
		int n, m;
		sil(n); sil(m);

		for(int i=0; i<n; i++) {
			sil(xp[i].fi);
			sil(xp[i].se.fi);
			xp[i].se.se = i;
		}

		gen(n, m);
	}
	return 0;
}
