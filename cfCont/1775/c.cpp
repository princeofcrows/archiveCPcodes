#include <bits/stdc++.h>

using namespace std;

#define mx 200005
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

int Set(int N,int pos){
	return N=N | (1LL<<pos);
}
int reset(int N,int pos){
	return N= N & ~(1LL<<pos);
}
bool check(int N,int pos){
	return (bool)(N & (1LL<<pos));
}

int32_t main(){
	read();
	//write();
	fst;
	int t;
	cin >> t;

	while(t--) {
		int n, x, m = 0;
		cin >> n >> x;

		for(int i=0; i<62; i++) {
			if(check(n, i)) {
				if(check(x, i)) {
					m = Set(m, i);
				}
			} else {
				if(check(x, i)) {
					m = -1;
					break;
				}
			}
		}

		cout << m << endl;
	}
	return 0;
}
