#include <bits/stdc++.h>
#define int long long
#define MX 100005
using namespace std;

int t[MX], T[MX], x[MX], c[MX], n, m;

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int i, j, ans, b, ex;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> t[i] >> T[i] >> x[i] >> c[i];
    }
    ans = 0;
    for(i=0;i<n;i++){
        if(t[i]>=T[i]){
            ans += m*x[i] + c[i];
            continue;
        }
        ex = (m/(T[i]-t[i]) + (bool)(m%(T[i]-t[i])))*c[i];
        b = m*x[i] + c[i];
        ans += min(ex, b);
    }
    cout << ans;
    return 0;
}
