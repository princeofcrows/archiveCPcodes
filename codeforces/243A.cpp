#include <bits/stdc++.h>

using namespace std;

#define mx 100005
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

#define _bit_range 28

int ara[mx];
set<int> s[_bit_range];

int _set(int N,int pos){
	return N=N | (1<<pos);
}
int _reset(int N,int pos){
	return N= N & ~(1<<pos);
}
bool _check(int N,int pos){
	return (bool)(N & (1<<pos));
}

void init() {
	for(int i=0; i<22; i++) {
		s[i].clear();
	}
}

void read_input(int n) {
	for(int i=1; i<=n; i++) {
		cin >> ara[i];
	}
}

void pre_pro(int n) {
	for(int i=1; i<=n; i++) {
		for(int j=0; j<_bit_range; j++) {
			if(_check(ara[i], j)) {
				s[j].insert(i);
			}
		}
	}
}

void solve(int n) {
	pre_pro(n);

	int data[mx* 20];
	mem(data, 0);

	for(int i=1; i<=n; i++) {
		int val = ara[i];
		data[val] = 1;
		vector <int> v;

		for(int j=0; j<_bit_range; j++) {
			s[j].erase(i);

			if(s[j].size() > 0) {
				v.pb((*s[j].begin()));
			}
		}

		sort(v.begin(), v.end());

		for(auto u: v) {
			val |= ara[u];
			data[val] = 1;
		}
	}

	int ans = 0;
	for(int i=0; i<mx*20; i++) ans += data[i];

	cout << ans << endl;

}

int32_t main(){
	//read();
	//write();
	fst;
	int n;

	while(cin >> n) {
		init();

		read_input(n);

		solve(n);
	}
	return 0;
}
