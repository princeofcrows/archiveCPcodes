#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, ox[1005], nit[1005], dp[1005][50][160], a, t, wt[1005];

ll knap(ll i, ll o2, ll n2){
    if(o2>=t&&n2>=a) return 0;
    if(i>=n) return 9999999999;
    if(dp[i][o2][n2]!=-1) return dp[i][o2][n2];
    ll ans = 0;
    ll ro = o2+ox[i];
    if(ro>=t) ro = t;
    ll rn = n2+nit[i];
    if(rn>=a) rn = a;
    ans = wt[i]+knap(i+1, ro, rn);
    ans = min(ans, knap(i+1, o2, n2));
    return dp[i][o2][n2] = ans;
}

int main(){
    //freopen("in.txt", "r", stdin);
    ll c;
    cin >> c;
    while(c--){
        cin >> t >> a >> n;
        for(int i=0;i<n;i++)
            cin >> ox[i] >> nit[i] >> wt[i];
        memset(dp, -1, sizeof dp);
        cout << knap(0, 0, 0) << endl;
    }
    return 0;
}
