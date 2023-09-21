#include <bits/stdc++.h>

using namespace std;

#define mx 400005
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

double x[3], y[3];

int main(){
	//read();
	//write();
	//fst;
	int t;
	cin >> t;

	while(t--) {
		for(int i=0; i<3; i++) {
			cin >> x[i] >> y[i];
		}


		double ans = 0.0;
		for(int i=0; i<3; i++) {
			for(int j=i+1; j<3; j++) {
				int otherIndex = (1^2^i^j);
				if(y[i] == y[j]) {
					if(y[otherIndex] < y[i])
						ans += sqrtl((x[i] - x[j])*(x[i] - x[j]) +(y[i] - y[j])*(y[i] - y[j]));
				}
			}
		}

		cout << fixed;
		cout << setprecision(10) << ans << endl;
	}
	return 0;
}
