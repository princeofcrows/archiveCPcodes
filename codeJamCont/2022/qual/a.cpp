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


void solve(int r, int c){
	for(int i=0; i<2*r+1; i++) {
		for(int j=0; j<c*2+1; j++) {
			if(j == 0) {
				if(i==0 ||i==1) {
					cout << ".";
					continue;
				}
			} else if(j==1) {
				if(i==0 ) {
					cout << ".";
					continue;
				}
			}
			if(i%2==0) {
				if(j%2==0) {
					cout << "+";
				} else {
					cout << "-";
				}
			} else {
				if(j%2==0) {
					cout << "|";
				} else {
					cout << ".";
				}
			}
		}

		cout << endl;
	}
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		int r, c;
		cin >> r >> c;

		cout << "Case #" << cs++ <<":"<<endl;
		solve(r, c);
	}
	return 0;
}
