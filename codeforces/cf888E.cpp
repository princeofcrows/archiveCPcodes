#include <bits/stdc++.h>
using namespace std;
#define MX 1005
#define int long long

int ara[MX], ara2[MX];

string str;
vector <int> g[30];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, ans, a, b, m;
    cin >> n >> m;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
        ara2[i] = ara[i]%m;
    }
    for(i=0;i<n;i++){
        if((ans+ara2[i])%m>ans) ans = (ans+ara2[i])%m;
        ans = max(ans, ara2[i]);
    }
    cout << ans;
    return 0;
}
