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

int p[105], n[105];
int m;

int solve(int sum) {
	int ans = 0;

	for(int i=sum; i>=max((sum - 499*62), 2LL); i--) {
		int x = i, tempAns = 1, temSum = 0;
		for(int j=0; j<m; j++) {
			int cnt = 0;

			while(x % p[j] == 0) {
				x /= p[j];
				tempAns *= p[j];
				temSum += p[j];
				cnt += 1;
			}

			if(cnt > n[j]) {
				tempAns = 0;
				temSum = -1;
				break;
			}
		}

		if(temSum == (sum - i) && tempAns == i) {
			ans = i;
			break;
		}
	}
	return ans;
}

int32_t main(){
	//read();
	//write();
	//fst;
	int t, cs = 1;
	cin >> t;

	while(t--) {
		int sum = 0;
		cin >> m;
		for(int i=0; i<m; i++) {
			cin >> p[i] >> n[i];
			sum += (p[i] * n[i]);
		}

		cout << "Case #" << cs++ <<": "<< solve(sum)<<endl;
	}
	return 0;
}
