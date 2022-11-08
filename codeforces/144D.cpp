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

vector <pii> g[mx];
vector <piii> e;

priority_queue <pii, vector <pii>, greater <pii> > q;
int dis[mx];

int dijkestra(int s, int l, int n){
	if(l == 0) return 1;

	for(int i=1; i<=n; i++) {
		dis[i] = inf;
	}

	dis[s] = 0;
	q.push({0, s});

	while(!q.empty()) {
		pii p = q.top();
		q.pop();

		if(dis[p.se]==p.fi) {
			for(auto u: g[p.se]) {
				if(dis[u.fi] > dis[p.se] + u.se) {
					dis[u.fi] = dis[p.se] + u.se;
					q.push({dis[u.fi], u.fi});
				}
			}
		}
	}

	int ans = 0;
	for(int i=1; i<=n; i++) {
		if(dis[i] == l) ans++;
	}

	for(auto p: e) {
		int a = p.se.fi, b = p.se.se;
		int dir_a = l - dis[a];
		int dir_b = l - dis[b];

		if(dis[a] < l && dis[a] + p.fi > l && p.fi - dir_a + dis[b] > l) ans++;
		if(dis[b] < l && dis[b] + p.fi > l && p.fi - dir_b + dis[a] > l) ans++;

		if(dis[a] + p.fi > l
		   && dis[b] + p.fi > l
		   && dir_a + dir_b == p.fi
		   &&  dis[a] < l
		   && dis[b] < l
		   ) ans++;
	}

	return ans;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n, m, s, l;
	while(cin >> n >> m >> s) {
		while(m--) {
			int v, u, w;
			cin >> v >> u >> w;

			g[u].pb({v, w});
			g[v].pb({u, w});

			e.pb({w, {u, v}});
		}
		cin >> l;

		cout << dijkestra(s, l,  n) << "\n";

		for(int i=0; i<=n; i++) g[i].clear();
		e.clear();
	}
	return 0;
}
