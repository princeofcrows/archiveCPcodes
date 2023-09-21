#include <bits/stdc++.h>

using namespace std;

// Data type
#define int long long
#define ll long long
#define pii pair <int, int>
#define piii pair <int, pii>
#define vi vector<int>
#define vll vector<long long>
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

pii po[105];

int32_t main(){
	//rin();
	//wrout();
	fst;

	int t;
	cin >> t;

	while(t--) {
		int n, k;
		cin >> n >> k;

		fr(i, 0, k) {
			int x, y;
			cin >> x >> y;

			po[i].fi = min(x, y);
			po[i].se = max(x, y);
		}

		sort(po, po + k);

		int ans =  (n - k) * ( n - k - 1) / 2;

		fr(i, 0, k) {
			fr(j, i+1, k) {
				if(po[i].se < po[j].se && po[i].se > po[j].fi) {
					ans++;
				}
			}

			int l = 0, r = 0;
			fr(j, 0, k) {
				if(j == i) continue;

				if(po[i].se >= po[j].se && po[i].fi <= po[j].se) {
					l++;
				} else {
					r++;
				}

				if(po[i].se >= po[j].fi && po[i].fi <= po[j].fi) {
					l++;
				} else {
					r++;
				}
			}

			int x = (po[i].se - po[i].fi - 1 - l);
			int y = (2*n - po[i].se + po[i].fi - 1 - r);

			//cout << x << " " << y << " " << r <<"  " << l << endl;;

			ans += min(x, y);
		}

		cout << ans << endl;
	}
	return 0;
}
