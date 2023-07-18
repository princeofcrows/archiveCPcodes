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

int dp[505][505][22], g[4][505][505];
int n, m;
pii d[]= {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

int solve(int i, int j, int k) {
	if(k == 0) return 0;
	if(dp[i][j][k] != -1) return dp[i][j][k];

	int ret = inf;

	fr(l, 0, 4) {
		int x = i + d[l].fi;
		int y = j + d[l].se;

		if(x > 0 && x <= n && y > 0 && y <= m) {
			ret = min(ret, solve(x, y, k-1) + g[l][i][j]);
		}
	}

	return dp[i][j][k] = ret;
}

int32_t main(){
	//rin();
	//wrout();
	//fst;

	int k;
	while(cin >> n >> m >> k) {
		ifr(i, 1, n) {
			fr(j, 1, m) {
				int a;
				cin >> a;
				g[2][i][j] = a;
				g[3][i][j+1] = a;
			}
		}

		fr(i, 1, n) {
			ifr(j, 1, m) {
				int a;
				cin >> a;
				g[0][i][j] = a;
				g[1][i+1][j] = a;
			}
		}

		mem(dp, -1);

		ifr(i, 1, n) {
			ifr(j, 1, m) {
				solve(i, j, k);
			}
		}

		ifr(i, 1, n) {
			ifr(j, 1, m) {
				int ans = inf;
				vi res(k+2, 0);

				ifr(l, 1, k/2) {
					int x = l * 2;
					res[x] = dp[i][j][l] * 2;
					//cout << res[x] << " -->" << x << " \n";

					int y = k - x;
					if(y%2 == 0 && y <= x) {
						if(res[x] >= 0 && res[y] >= 0)
							ans = min(ans, res[x] + res[y]);
					}
				}

				if(ans == inf) ans = -1;
				cout << ans << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
