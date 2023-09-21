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

string s[105];

string test(vector<int> v) {
	vector <int> ara(v.size() + 1, 0);
	for(int i=0; i<v.size(); i++) ara[i+1] = ara[i] + v[i];

	for(int i=2; i<=v.size(); i++) {
		for(int j=i; j<ara.size(); j++) {
			int x = ara[j] - ara[j - i];

			if(x % i == 0) {
				cout << x << " " << i << " " <<j << endl;
				return "false";
			}
		}
	}

	return "true";
}


int32_t main(){
	//read();
	//write();
	fst;

	int q;
	cin >> q;

	while(q--) {
		int n;
		cin >> n;

		if(n == 1) cout << "1\n";
		else if(n%2) cout << "-1\n";
		else {
			//std::vector<int> v;
			for(int i=1; i<=n; i+=2) {
				cout << i+1 << " " << i <<" ";
				// v.pb(i+1);
				// v.pb(i);
			}
			//cout << endl << test(v);
			cout << "\n";
		}
	}

	return 0;
}
