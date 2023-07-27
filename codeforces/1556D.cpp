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

int andor[2][mx], res[32][mx], ara[mx], bit_cnt = 32;
string qrys[] = {"and ", "or ", "finish "};

int32_t main(){
	//rin();
	//wrout();
	fst;

	int n, k;

	while(cin >> n >> k) {
		ifr(i, 2, n){
			fr(j, 0, 2) {
				cout << qrys[j] << 1 << " " << i << endl;
				cin >> andor[j][i];
			}

			fr(j, 0, bit_cnt) {
				if(check(andor[0][i], j) && check(andor[1][i], j)) {
					res[j][i] = 1;
				} else if(!check(andor[0][i], j) && !check(andor[1][i], j)) {
					res[j][i] = 0;
				} else {
					res[j][i] = -1;
				}

				//cout << i << " "<< j << " --> " << res[j][i] << endl;
			}
		}

		int anox[2];
		fr(j, 0, 2) {
			cout << qrys[j] << 2 <<" " << 3 << endl;
			cin >> anox[j];
		}

		mem(ara, 0);
		ifr(j, 0, bit_cnt) {
			int idf = 0;
			ifr(i, 2, n){
				if(res[j][i] == 1) {
					ara[1] = Set(ara[1], j);
					ara[i] = Set(ara[i], j);
				} else if(res[j][i] == -1) {
					idf++;
				}
			}

			if(idf == n-1) {
				if(!check(anox[0], j)) {
					ara[1] = Set(ara[1], j);
				}
			}

			bool flag = check(ara[1], j);
			ifr(i, 2, n){
				if(res[j][i] == -1) {
					if(!flag) {
						ara[i] = Set(ara[i], j);
					}
				}
			}
		}

		sort(ara+1, ara+1+n);

		cout << qrys[2] << ara[k] << endl;
	}
	return 0;
}
