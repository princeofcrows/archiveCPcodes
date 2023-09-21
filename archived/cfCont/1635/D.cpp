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

int ara[mx], dp[mx], cnt[35];
set <int> st;

int32_t main(){
    read();
    //write();
    //fst;
    int n, p;

    while(si(n) != EOF){
        si(p);

        for(int i=0;i<n;i++) {
            si(ara[i]);
        }

        sort(ara, ara+n);

        for(int i=0;i<n;i++) {
            int x = ara[i];
            bool f = true;

            while(x > 0) {
                if(st.count(x)) {
                    f = false;
                }

                if(x & 1) {
                    x = x >> 1;
                } else if(x & 2) {
                    break;
                } else {
                    x = x >> 2;
                }
                //cout << ara[i] << " " << x << endl;
            }

            if(f) st.insert(ara[i]);
        }

        mem(cnt, 0);
        for(auto u: st) {
            cnt[(int) log2(u)]++;
        }

        int ans = 0;
        for(int i=0;i<p;i++) {
            if(i< 34) dp[i] = cnt[i];
            else dp[i] = 0;

            if(i) dp[i] = (dp[i] + dp[i-1]) % mod;
            if(i >= 2) dp[i] = (dp[i] + dp[i-2]) % mod;

            ans = (ans + dp[i]) % mod;
            //cout << i << " " << dp[i] << " " << cnt[i] << " \n";
        }

        cout << ans << endl;
        st.clear();
    }
    return 0;
}
