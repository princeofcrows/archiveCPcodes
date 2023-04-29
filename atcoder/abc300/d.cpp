#include <bits/stdc++.h>

using namespace std;

#define mx 3000005
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

vector <int> seive(int n){
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;

	vector <int> res;
	for (int i = 2; i <= n; i++) {

		if (is_prime[i]) {
			res.pb(i);

			for (int j = i + i; j <= n; j += i)
				is_prime[j] = false;
		}
	}

	return res;
}


int solve(int n) {
	std::vector<int> v = seive(2000000);
	int ans = 0;

	for(int i=0; i<v.size(); i++) {
		int a = v[i];

		if(a * a > n) break;

		for(int j=i+1; j<v.size(); j++) {
			int b = v[j];

			int x = a * a;
			int y = b * b;

			int z = x * y;

			if(x > n || y > n) break;
			if(z > n || z < x || z < y) break;

			int c = n / z;

			//cout << c << " ";

			if(c <= 0 || c <= a ) break;

			int idx = upper_bound(v.begin(), v.end(), c) - v.begin();
			idx = min(idx, j);

			//if(idx >= v.size()) continue;
			//if(idx <= j) continue;

			// cout << a << " " << b << " " << c << endl;
			// cout << i << " " << j << " " <<idx<<endl;
			ans += max(0LL,  idx - i - 1 );
		}
	}

	return ans;
}

int32_t main(){
	//read();
	//write();
	fst;
	int n;
	while(cin >> n) {

		cout << solve(n) << "\n";
	}
	return 0;
}
