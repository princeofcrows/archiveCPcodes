#include <bits/stdc++.h>

using namespace std;

// Data type
//#define int long long
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

set <int> st;

int32_t main(){
	//rin();
	//wrout();
	fst;
	int n, q;
	string s;

	while(cin >> n >> s >> q) {
		bool isUpp, isLow = false;
		while(q--) {
			int t, x;
			string c;
			cin >> t >> x >> c;

			if(t == 1) {
				s[x-1] = c[0];
				st.insert(x-1);
			} else if (t == 3) {
				isUpp = true;
				isLow = false;
				st.clear();
			} else {
				isUpp = false;
				isLow = true;
				st.clear();
			}
		}

		fr(i, 0, s.length()) {
			char u = s[i];

			if(st.count(i)) {
				cout << u;
				continue;
			}

			if(isUpp && !isLow) {
				if(u >= 'a' && u <= 'z') {
					cout << ((char) (u - 'a' + 'A'));
				} else {
					cout << u;
				}
			} else if(!isUpp && isLow) {
				if(u >= 'A' && u <= 'Z') {
					cout << ((char) (u - 'A' + 'a'));
				} else {
					cout << u;
				}
			} else {
				cout << u;
			}
		}
	}
	return 0;
}
