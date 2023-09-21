#include <bits/stdc++.h>

using namespace std;

#define mx 200015
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

string str;
int ara[1 << 19], nxt[1 << 19], prv[1 << 19][2];


void init(int k) {
	int co = 0;
	int np = (1 << (k - 1));

	mem(prv, -1);
	mem(nxt, -1);

	for(int i=k-1; i>=0; i--) {
		for(int j=0; j<(1 << i); j++) {
			int id = j + co;

			if(i < k-1) {
				int l = prv[id][0];
				int r = prv[id][1];

				if(str[id] == '?') {
					ara[id] = ara[l] + ara[r];
				} else if(str[id] == '1') {
					ara[id] = ara[r];
				} else {
					ara[id] = ara[l];
				}

				//cout << id << " " << l<< " " << r <<" " << ara[id] << endl;
			} else {
				if(str[id] == '?') {
					ara[id] = 2;
				} else {
					ara[id] = 1;
				}
			}

			nxt[id] = np;
			prv[np][id % 2] = id;

			np+=(id%2);
		}

		co += 1 << (i);
	}
}

int update(int k, int id) {
	int n = (1 << (k)) - 1;

	while(id < n) {
		if(prv[id][0] != -1) {
			int l = prv[id][0];
			int r = prv[id][1];

			if(str[id] == '?') {
				ara[id] = ara[l] + ara[r];
			} else if(str[id] == '1') {
				ara[id] = ara[r];
			} else {
				ara[id] = ara[l];
			}
		} else {
			if(str[id] == '?') {
				ara[id] = 2;
			} else {
				ara[id] = 1;
			}
		}

		id = nxt[id];
		//sscout << id << " ";
	}

	return ara[n-1];
}

int32_t main(){
	//read();
	//write();
	fst;
	int k, q;
	cin >> k >> str;
	init(k);

	cin >>  q;

	while(q--) {
		int p; char c;

		cin >> p >> c;
		str[p-1] = c;

		cout << update(k, p-1) << endl;
	}

	return 0;
}
