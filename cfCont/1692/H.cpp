#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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
int data[mx];

void solve(int n) {
	map<int, vector<int> > mp;
	set <int> s;

	for(int i=1; i<=n; i++) {
		cin >> data[i];
		s.insert(data[i]);
		mp[data[i]].push_back(i);
	}

	int a = data[1], l = 1, r = 1, ear = 1;
	for(auto u: s) {
		for(int i=1; i<mp[u].size(); i++) {
			ara[i] = 1 - (mp[u][i] - mp[u][i-1] - 1);
		}

		int curMax = 0, prevMax = 0, start0 = 1, end = 0, start = 1;
		for(int i=1; i<mp[u].size(); i++) {
			curMax += ara[i];
			if(curMax < 0) {
				start = i+1;
				curMax = 0;
			}

			if(curMax > prevMax) {
				end = i;
				start0 = start;
				prevMax = curMax;
			}

		}

		if(prevMax + 1 > ear) {
			ear = prevMax + 1;
			a = u;
			l = mp[u][start0 - 1];
			r = mp[u][end];
		}
	}

	cout << a << " " << l << " "<< r << endl;
}

int32_t main(){
	//read();
	//write();
	fst;

	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}
