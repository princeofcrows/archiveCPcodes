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



bool solve(string s, string t, int len) {
	queue <int> q[2][3];

	for(int i=0; i<len; i++) {
		q[0][s[i]-'a'].push(i);
		q[1][t[i]-'a'].push(i);
	}

	for(int i=0; i<3; i++) {
		if(q[0][i].size() != q[1][i].size()) return false;
	}

	for(int i=0; i<len; i++) {
		if(s[i] == 'a') {
			if(q[1][0].front() < i) return false;
			if(!q[1][2].empty()) {
				if(q[1][2].front() < q[1][0].front()) return false;
			}
		} else if(s[i] == 'c') {
			if(q[1][2].front() > i) return false;
			if(!q[1][0].empty()) {
				if(q[1][0].front() < q[1][2].front()) return false;
			}

		}

		q[0][s[i]-'a'].pop();
		q[1][s[i]-'a'].pop();
	}

	return true;
}

int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		int n;
		string s, t;
		cin >> n >> s >> t;


		if(solve(s, t, n)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
