#include <bits/stdc++.h>

using namespace std;

#define mx 400005
#define int long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define fi first
#define se second
#define mod 2000000000
#define inf 1e18+19
#define pb push_back
#define sil(x) scanf("%lld", &x)
#define si(x) scanf("%d", &x)
#define mem(ara, x) memset(ara, x, sizeof ara)
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void test(int tt) {
	for(int i=1; i<=tt; i++) {
		int px[2][i*2+1][i*2+1];
		mem(px, 0);

		for(int x=0; x<=2*i; x++) {
			for(int y=0; y<=2*i; y++) {
				int dx = x - i;
				int dy = y - i;

				double r = round(sqrt((dx*dx)*1.0 + (dy*dy)*1.0));
				int rr = (int) (r);

				if(rr <= i) {
					px[0][x][y] = 1;
				}
			}
		}

		for(int r=0; r<=i; r++) {
			for(int x=-r; x<=r; x++) {
				int dx = x;
				double temp = (r*r)*1.0 - (dx*dx)*1.0;
				double dy = round(sqrtl(temp));
				int y = (int) (dy);

				//cout << x << " " << y << " " << temp<< endl;

				px[1][x+i][y+i] = 1;
				px[1][x+i][i-y] = 1;
				px[1][y + i][x+i] = 1;
				px[1][-y + i][x+i] = 1;
			}
		}

		int ans = 0;

		for(int x=0; x<=2*i; x++) {
			for(int y=0; y<=2*i; y++) {
				if(px[1][x][y] != px[0][x][y]) {
					ans++;
				}
				//cout << px[1][x][y];
			}
			//cout << endl;
		}

		cout<< i << " " <<ans << endl;
	}
}


int32_t main(){
	//read();
	//write();
	//fst;
	//test();

	int t, cs = 1;
	sil(t);

	while(t--) {
		int r;
		sil(r);

		cout << "Case #" << cs++ <<": ";
		test(r);
	}
	return 0;
}
