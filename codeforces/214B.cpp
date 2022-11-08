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

int cnt[10];

int32_t main(){
	//read();
	//write();
	int n;
	while(cin >> n ) {
		mem(cnt, 0);

		bool is_zero = false;
		int tot = 0;

		for(int i=0; i<n; i++) {
			int d;
			cin >> d;
			cnt[d]++;

			if(d == 0) is_zero = true;

			tot += d;
		}

		if(tot == 0) {
			cout << 0 <<"\n";
			continue;
		}

		if(is_zero) {
			if(tot%3 == 0) {
				for(int i=9; i>=0; i--) {
					while (cnt[i]--) {
						cout << i;
					}
				} cout << "\n";
			} else {
				for(int i=1; i<=9; i++) {
					if(!cnt[i]) continue;
					cnt[i]--;
					tot -= i;
					if(tot % 3 == 0) break;
					cnt[i]++;
					tot += i;

				}

				if(tot%3 == 0) {
					if(tot == 0) {
						cout << 0 <<"\n";
						continue;
					}

					for(int i=9; i>=0; i--) {
						while (cnt[i]--) {
							cout << i;
						}
					}
					cout << "\n";
				} else{
					for(int i=1; i<=9; i++) {
						if(!cnt[i]) continue;

						cnt[i]--;
						tot -= i;

						bool is_div = false;

						for(int j=1; j<=9; j++) {
							if(cnt[j]) {
								cnt[j]--;
								tot -= j;

								if(tot % 3 == 0) {
									is_div = true;
									break;
								}

								cnt[j]++;
								tot += j;
							}
						}

						if(is_div) break;

						cnt[i]++;
						tot += i;
					}

					if(tot%3 == 0) {
						if(tot == 0) {
							cout << 0 <<"\n";
							continue;
						}

						for(int i=9; i>=0; i--) {
							while (cnt[i]--) {
								cout << i;
							}
						}
						cout << "\n";
					} else{
						cout << "-1\n";
					}
				}
			}
		} else {
			cout << "-1\n";
		}
	}
	return 0;
}
