#include <bits/stdc++.h>

using namespace std;

// Data type
#define int long long
#define ll long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pii>
#define mii map<int, int>
#define msi map<string, int>
#define si set<int>
#define spi set<pii>

// Method or var shorthands
#define fi first
#define se second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(v) v.begin(), v.end()
#define sort_all(v) sort(all(v));
#define rev_all(v) rev(all(v));
#define mem(ara, x) memset(ara, x, sizeof ara)

// Const
#define mod 1000000007
#define inf 1e18+19
#define mx 200015
#define pi acos(-1.0)

// Input Output
#define sild(x) scanf("%lld", &x)
#define sid(x) scanf("%d", &x)
#define rin() freopen("in.txt", "r", stdin)
#define wrout() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Loops
#define fr(i,s,e) for(int i=s; i<e; i++)
#define ifr(i,s,e) for(int i=s; i<=e; i++)
#define rfr(i,e,s) for(int i=e-1; i>=s; i--)

// Functions
ll gcd(ll a,ll b) {
	if (b==0) return a; return gcd(b, a%b);
}

ll lcm(ll a,ll b) {
	return a/gcd(a,b)*b;
}

void yes() {
	cout << "YES\n";
}

void no() {
	cout << "NO\n";
}

#define K 22
int table[mx][K], ara[mx];

int callBackFn(int a, int b) {
	return min(a, b);
}

void initSparseTable(int n){
	for (int i=0; i<n; i++) {
		table[i][0] = ara[i];
	}

	for(int j = 1; j <= K; j++) {
		for(int i = 0; i <= n - (1 << j); i++)
			table[i][j] = callBackFn(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
	}
}

int query(int L, int R){
	int ans = inf;
	for(int j = K; j >= 0; j--) {
		if(L + (1<<j) - 1 <= R) {
			ans = callBackFn(ans, table[L][j]);
			L += 1 << j;
		}
	}
	return ans;
}

bool check(int l, int h, int s, int n) {
	int x = query(l-1, h-1);

	return x + s >= 0;
}

int32_t main(){
	//rin();
	//wrout();
	//fst;

	int t;
	cin >> t;
	while(t--) {
		int n, s;
		cin >> n >> s;

		fr(i, 0, n) {
			cin >> ara[i];
			if(i) ara[i] += ara[i-1];
		}

		initSparseTable(n);

		int ans = 0, st = -1, en = -1;
		ifr(i, 1, n) {
			int l = i, h = n, x = (i - 2 >= 0) ? ara[i-2] : 0;;
			while(l <= h) {
				int mid = (l+h) / 2;

				if(check(i, mid, s - x, n)) {
					l = mid + 1;
				} else {
					h = mid - 1;
				}
			}

			if(h - i + 1 > ans) {
				ans = h - i + 1;
				st = i;
				en = h;
			}
		}

		if(ans == 0) cout << "-1\n";
		else cout << st << " " << en << "\n";
	}
	return 0;
}
