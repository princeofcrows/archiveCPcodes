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

int32_t main(){
    //read();
    //write();
    //fst;
    int t;
    si(t);
    while(t--){
        int n, ans = 0;
        si(n);
        for(int i=0;i<n;i++) {
            int a;
            si(a);
            ans |= a;
        }
        cout << ans << endl;
    }
    return 0;
}