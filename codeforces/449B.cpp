#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define mx 100005
#define f first
#define s second
#define inf 100000000000000000


vector <pii> g[mx];

int ara[mx], vis[mx];
int n, m, k, ans;

void dijkestra(){
	priority_queue <pii, vector <pii>, greater <pii> > q;
	q.push( {0, 1});
	ara[1] = 0;

	for(int i=1; i<=n; i++) {
		sort(g[i].begin(), g[i].end());

		if(ara[i] != inf) {
			q.push({ara[i], i});
		}
	}

	while(!q.empty()) {
		int a = q.top().f;
		int b = q.top().s;

		q.pop();
		if(ara[b]==a) {
			for(int i=0; i<g[b].size(); i++) {
				int c = g[b][i].s;
				int d = g[b][i].f;
				if(ara[c]>ara[b]+d) {
					ara[c] = ara[b] + d;
					q.push({ara[c], c});

					if(vis[c] == 2) {
						vis[c] = 1;
						ans++;
					}
				} else if(ara[c] == ara[b]+d) {
					if(vis[c] == 2) {
						vis[c] = 1;
						ans++;
					}
				}
			}
		}
	}
	//for(int i=1;i<=n;i++) cout << ara[i] << " ";
	cout << ans << endl;
	for(int i=1; i<=n; i++) g[i].clear();
}

int32_t main(){
	//freopen("in.txt", "r", stdin);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> n >> m >> k) {
		int a, b, c;
		for(int i=1; i<=n; i++) {
			ara[i] = inf;
			vis[i] = 0;
		}
		for(int i=0; i<m; i++) {
			cin >> a >> b >> c;
			g[a].push_back({c, b});
			g[b].push_back({c, a});
		}

		ans = 0;
		for(int i=1; i<=k; i++) {
			cin >> a >> c;

			if(ara[a] != inf) ans++;

			ara[a] = min(c, ara[a]);
			vis[a] = 2;
		}

		dijkestra();
	}
	return 0;
}
