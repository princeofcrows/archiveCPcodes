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

string a, b;

bool is_all_zero(string x) {
	for(auto c: x) {
		if(c == '1') return false;
	}

	return true;
}

// int no_of_one(string x) {
// 	int ans = 0;
//
// 	for(auto c: x) {
// 		if(c == '1') ans++;
// 	}
//
// 	return ans;
// }

int32_t main(){
	//read();
	//write();

	while(cin >> a >> b ) {
		if(a.length() != b.length()) {
			cout << "NO\n";
			continue;
		}

		bool a_zero_all = is_all_zero(a);
		bool b_zero_all = is_all_zero(b);

		if(a_zero_all) {
			if(b_zero_all) {
				cout << "YES\n";
				continue;
			} else {
				cout << "NO\n";
				continue;
			}
		} else {
			// int a_ones = no_of_one(a);
			// int b_ones = no_of_one(b);
			//
			// if(a_ones > b_ones)
			if(b_zero_all) {
				cout << "NO\n";
				continue;
			} else {
				cout << "YES\n";
				continue;
			}
		}
	}
	return 0;
}
