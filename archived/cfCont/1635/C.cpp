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
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define fst ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int ara[mx];
pii id_small[mx];
set <pii> st;
set <piii> small_so_far;
vector <piii> v;

int32_t main(){
    //read();
    //write();
    //fst;
    int t;
    si(t);

    while(t--){
        int n;
        si(n);

        for(int i=0;i<n;i++) {
            si(ara[i]);
            st.insert({ara[i], i});
        }

        bool f = true;
        for(int i=0;i<n-1;i++) {
            st.erase({ara[i], i});
            set <pii> :: iterator max_c = st.end();
            max_c--;

            int c = ara[i] - (*max_c).fi;
            small_so_far.insert({c, {i, (*max_c).se}});
            id_small[i].fi = c;
            id_small[i].se = (*max_c).se;
        }

        for(int i=0;i<n-2;i++) {
            small_so_far.erase({id_small[i].fi, {i, id_small[i].se}});

            if((*small_so_far.begin()).fi < ara[i]) {
                ara[i] = min(ara[i], (*small_so_far.begin()).fi );
                v.pb({i+1, {(*small_so_far.begin()).se.fi + 1, (*small_so_far.begin()).se.se + 1}});
            }

        }

        for(int i=1;i<n;i++) {
            if(ara[i-1] > ara[i]) {
                f = false;
                break;
            }
        }

        if(f) {
            cout << v.size() << endl;
            for(auto u: v) {
                cout << u.fi << " " << u.se.fi << " " << u.se.se << endl;
            }
        } else {
            cout << -1 << endl;
        }

        st.clear();
        v.clear();
        small_so_far.clear();
    }
    return 0;
}
