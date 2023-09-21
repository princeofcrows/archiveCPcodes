#include <bits/stdc++.h>
using namespace std;
#define MX 1005

int ara[MX];

string str;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, ans;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    ans = 0;
    for(i=2;i<=n-1;i++){
        if(ara[i]>ara[i-1]&&ara[i]>ara[i+1]) ans++;
        if(ara[i]<ara[i-1]&&ara[i]<ara[i+1]) ans++;
    }
    cout << ans;
    return 0;
}
