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
    fst;
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int a = (n - 4) / 2;
        int b = (n - 4) - a;
        int c = a/3;
        
        a = a - c;
        b = b + c;
        
        cout << min(a - 1, b - a) << "\n";

    }
    return 0;
}
