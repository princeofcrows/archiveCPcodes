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
#define rev_all(v) reverse(all(v));
#define mem(ara, x) memset(ara, x, sizeof ara)

// Const
#define mod 28722900390631
#define inf 1e18+19
#define mx 200015
#define pi acos(-1.0)
#define seed 997

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

int Set(int N,int pos){
	return N=N | (1<<pos);
}
int reset(int N,int pos){
	return N= N & ~(1<<pos);
}
bool check(int N,int pos){
	return (bool)(N & (1<<pos));
}

void yes() {
	cout << "YES\n";
}

void no() {
	cout << "NO\n";
}

int ara[1005];

int32_t main(){
	//rin();
	//wrout();
	fst;
	int n;

	while(cin >> n) {
		fr(i, 0, n) {
			cin >> ara[i];
		}

		int ans = 0;
		for(int i=0; i<n; i+=2) {
			int cnt[] = {0, 0};
			int cusum = inf;

			fr(j, i, n) {
				cnt[j%2] += ara[j];

				if(j%2) {
					int x = cnt[0] - cnt[1];

					if(x >= 0) {
						if(cusum == inf) {
							ans += min(ara[i] - x, ara[j]);
						}
						else if(x <= cusum) {
							ans += max(0LL, min(ara[j], min(ara[i] - x, cusum-x+1LL)));
						}

						cusum = min(cusum, x);
					}
					else {
						ans += max(min(ara[j] + x, min(ara[i], cusum + 1LL)), 0LL);

						//cout << i << " " << j << " " << ans << " " <<  max(min(ara[j] + x, min(ara[i], cusum)), 0LL) << endl;
						break;
					}
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}
