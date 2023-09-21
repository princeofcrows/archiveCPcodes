#include <bits/stdc++.h>

using namespace std;

#define mx 800005
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

int ara[mx], sz[mx], id[mx];

void initset(int n){
	for(int i = 1; i<=n; i++) {
		ara[i] = i;
		sz[i] = 1;
		id[i] = 0;
	}
}

int findset(int i){
	if(ara[i] == i) return i;
	return ara[i] = findset(ara[i]);
}

bool issameset(int i, int j){
	return (findset(i)==findset(j));
}

void unionset(int i, int j){
	int a = findset(j);
	int b = findset(i);
	if(a==b) return;
	if(sz[a]>=sz[b]) {
		sz[a]+=sz[b];
		ara[b] = a;
	}
	else{
		sz[b]+=sz[a];
		ara[a] = b;
	}
}


int32_t main(){
	//read();
	//write();
	//fst;
	mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int m = (1 << n);
		//int count = ((1 << (n+1)) + 2)/3 - m;
		int firstItr = m / 4;

		initset(m);
		while(firstItr--) {
			int a = rng()%m + 1;
			int b = rng()%m + 1;

			if(a == b) {
				firstItr++;
				continue;
			} else if(issameset(a, b)) {
				firstItr++;
				continue;
			}

			cout << "? " << a << " " << b << endl;
			int c;
			cin >> c;

			if(c == 0) {
				unionset(a, b);
				id[a] = -1;
				id[b] = -1;
			}
			else if(c == 1) id[b] = -1;
			else if(c == 2) id[a] = -1;
		}

		vector<int> p;
		for(int i=1; i<=m; i++) {
			if(sz[findset(i)] == 1) {
				if(id[i] != -1) {
					p.pb(i);
				}
			}
		}

		shuffle(p.begin(), p.end(), rng);

		while(p.size() > 1) {
			int a = p.back();
			p.pop_back();

			int b = p.back();
			p.pop_back();

			cout << "? "<<  a << " " << b << endl;
			int c;
			cin >> c;

			if(c == 0) continue;
			else if(c == 1) p.pb(a);
			else if(c == 2) p.pb(b);

			shuffle(p.begin(), p.end(), rng);
		}

		cout << "! " << p[0] << endl;
	}
	return 0;
}
