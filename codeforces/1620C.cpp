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


int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n, k, x;
		string str, res;
		vector<int> v;

		cin >> n >> k >> x >> str;
		x--;

		for(int i=0; i<n; i++) {
			if(str[i] == '*') {
				if(i == 0 || str[i-1] == 'a') v.pb(1);
				else v.back()++;
			}
		}

		reverse(v.begin(), v.end());

		int l = 0;
		for(int i=n-1; i>=0; i--) {
			if(str[i] == '*') {
				while(str[i] == '*' && i>=0) i--;
				i++;

				int base = (v[l] * k + 1);
				int bc = x % base;

				while(bc) {
					res += "b";
					bc--;
				}

				x /= base;
				l++;
			} else {
				res += str[i];
			}
		}

		reverse(res.begin(), res.end());

		cout << res << endl;
	}
	return 0;
}
