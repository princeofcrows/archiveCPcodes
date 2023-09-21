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
#define read() freopen("second_friend_input.txt", "r", stdin)
#define write() freopen("second_friend_output.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

string str[105];

int32_t main(){
	//read();
	//write();
	fst;
	int t, cs = 1;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;

		int treeCount = 0;
		for(int i=0; i<n; i++) {
			cin >> str[i];

			for(int j=0; j<m; j++) {
				if(str[i][j] == '^') treeCount++;
			}
		}

		cout << "Case #" << cs++ << ": ";
		if((n==1 || m == 1) ) {
			if(treeCount == 0) {
				cout << "Possible\n";

				for(int i=0; i<n; i++) {
					for(int j=0; j<m; j++) {
						cout << str[i][j];
					}
					cout << "\n";
				}

			} else {
				cout << "Impossible\n";
			}

		}
		else {
			cout << "Possible\n";
			for(int i=0; i<n; i++) {
				for(int j=0; j<m; j++) {
					cout << "^";
				}

				cout << "\n";
			}
		}

	}
	return 0;
}
