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

int ar[5] = {1, 10, 100, 1000, 10000};
int ara[mx];

int32_t main(){
	//read();
	//write();
	fst;
	int t;
	cin >> t;
	while(t--) {
		string s;
		map <int, int> mp, lp[2];
		cin >> s;
		int tot = 0;

		for(int j=s.length()+5; j>=0; j--) {
			ara[j] = 0;
		}

		for(int j=s.length()-1; j>=0; j--) {
			char ch = s[j];
			bool is = false;

			for(int i=((int) (ch-'A') + 1); i<5; i++) {
				if(mp[i]) {
					is = true;
					break;
				}
			}

			if(is) tot -= ar[ch-'A'];
			else tot += ar[ch-'A'];

			mp[ch - 'A']++;
			ara[j] = tot;
		}

		for(int k=0; k<s.length(); k++) {
			char ch = s[k];
			mp[ch - 'A']--;

			for(int i=0; i<5; i++) {
				int temp = 0;
				for(int j=0; j<i; j++) {
					temp -= ((lp[0][j] + lp[1][j]) * ar[j]);
				}

				for(int j=i; j<5; j++) {
					if((ch - 'A') > i) {
						bool is = false;
						for(int l=j+1; l<5; l++) {
							if(mp[l]) {
								is = true;
								break;
							}
						}

						if(is) {

						} else {
							temp -= (lp[1][j] * ar[j]);
							temp += (lp[0][j] * ar[j]);
						}
					} else {
						temp -= (lp[1][j] * ar[j]);
						temp += (lp[0][j] * ar[j]);
					}
				}

				bool isD = false;
				for(int l=i+1; l<5; l++) {
					if(mp[l]) {
						isD = true;
						break;
					}
				}
				if(isD) temp -= (ar[i]);
				else temp += (ar[i]);

				tot = max(tot, temp + ara[k+1]);
			}

			int isD = 0;
			for(int l=((int) (ch-'A') + 1); l<5; l++) {
				if(mp[l]) {
					isD = 1;
					break;
				}
			}

			lp[isD][ch -'A']++;
		}


		cout << tot << endl;
	}
	return 0;
}
