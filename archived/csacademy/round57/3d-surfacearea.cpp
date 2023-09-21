#include <bits/stdc++.h>
using namespace std;
#define int long long

int ara[105][105];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int n, m, i, j, ans;
    memset(ara, 0, sizeof ara);
    cin >> n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> ara[i][j];
        }
    }
    ans = 0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            ans += 2;
            if(ara[i][j]>ara[i-1][j]) ans += (ara[i][j]-ara[i-1][j]);
            if(ara[i][j]>ara[i][j-1]) ans += (ara[i][j]-ara[i][j-1]);
            if(ara[i][j]>ara[i][j+1]) ans += (ara[i][j]-ara[i][j+1]);
            if(ara[i][j]>ara[i+1][j]) ans += (ara[i][j]-ara[i+1][j]);
        }
    }
    cout << ans;
    return 0;
}
