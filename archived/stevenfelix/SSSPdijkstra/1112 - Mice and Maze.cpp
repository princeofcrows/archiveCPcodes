#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
ll dp[104][104];

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, p, n, s, e;
    cin >> h;
    h2 = 1;
    while(h--){
        cin >> n >> e >> t >> m;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                dp[i][j] = 9999999999999;
                if(i==j) dp[i][j] = 0;
            }
        }
        for(i=0;i<m;i++){
            cin >> a >> b >> c;
            dp[a][b] = c;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    dp[j][k] = min(dp[j][k], dp[j][i]+dp[i][k]);
                }
            }
        }
        ans = 0;
        for(i=1;i<=n;i++){
            if(dp[i][e]<=t) ans++;
        }
        cout << ans << endl;
        if(h) cout << endl;
    }
    return 0;
}















