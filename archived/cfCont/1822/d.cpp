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

bool isPerm(vector <int> v) {
	sort(v.begin(), v.end());

	for(int i=0; i<v.size(); i++) {
		if(v[i] != i) return false;
	}

	return true;
}

void printV(vector <int> v) {
	for(auto u: v) {
		cout << u << " ";
	}

	cout << endl;
}

void test(int n) {
	vector <int> v(n);

	for(int i=1; i<=n; i++) {
		v[i-1] = i;
	}

	do {
		std::vector<int> res(n);

		for(int i=0; i<n; i++) {
			res[i] = v[i] % n;

			if(i) res[i] = (res[i] + res[i-1]) % n;
		}

		if(isPerm(res)) {
			printV(v);
		}
	} while(next_permutation(v.begin(), v.end()));


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

		//test(n);

		if(n%2) {
			if(n == 1) {
				cout << 1 << "\n";
			} else {
				cout << -1 << "\n";
			}
		} else {
			for(int i=n, j=1; i>1; i-=2, j+=2) {
				cout << i << " " << j << " ";
			}

			cout << "\n";
		}

	}

	return 0;
}
