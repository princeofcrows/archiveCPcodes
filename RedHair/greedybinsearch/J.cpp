#include <bits/stdc++.h>
using namespace std;

int ara[5005][25];
map <int, int> dat;
#define inf 1000000

int main(){
    //freopen("in.txt", "r", stdin);
    int n, k, i, j, q, a, ans, l1, l2, l, m, ans2;
    cin >> n >> k;
    for(i=0;i<n;i++){
        ara[i][0] = 0;
        cin >> ara[i][1];
        dat[ara[i][1]] = 1;
        for(j=2;j<=k;j++){
            ara[i][j] = ara[i][1]*j;
            if(!dat[ara[i][j]])dat[ara[i][j]] = j;
            else dat[ara[i][j]] = min(j, dat[ara[i][j]]);
        }
    }
    cin >> q;
    while(q--){
        cin >> a;
        ans = inf;
        for(i=0;i<n;i++){
            for(j=1;j<=k;j++){
                if(ara[i][j]>a) break;
                if(ara[i][j]==a){
                    ans = min(ans, j);
                    continue;
                }
                l = dat[a-ara[i][j]];
                if(l&&l+j<=k) ans = min(l+j, ans);
            }
        }
        if(ans==inf) ans = -1;
        cout << ans << endl;
    }
    return 0;
}
