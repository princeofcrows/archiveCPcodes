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

string s;

bool is_all_a(int n) {
	int cnt = 0;
	for(int i=s.length() - 1; i>=0; i--) {
		if(s[i] == 'A') cnt++;
		else {
			if(cnt == n) return true;

			return false;
		}
	}

	return false;
}

int first_a() {
	for(int i=0; i<s.length(); i++) {
		if(s[i] == 'A') return i;
	}

	return 0;
}

int last_non_a() {
	for(int i=s.length() - 1; i>=0; i--) {
		if(s[i] == 'N') return i;
	}

	return 0;
}


int32_t main(){
	//read();
	//write();
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		for(int i=0; i<n; i++) {
			s += "BAN";
		}

		vector <pii> v;

		while(1) {
			//if(is_all_a(n)) break;

			int i = first_a();
			int j = last_non_a();

			if(j < i) break;

			v.pb({i+1, j+1});
			swap(s[i], s[j]);

			//cout << s << endl;
		}

		cout << v.size() << "\n";
		for(auto u: v) {
			cout << u.fi <<  " " << u.se << "\n";
		}

		s = "";
	}
	return 0;
}
