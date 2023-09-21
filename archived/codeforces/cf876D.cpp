#include <bits/stdc++.h>
using namespace std;
long long ara[300005], ara2[300005];
int main(){
    //freopen("in.txt", "r", stdin);
    long long int i, j, n, a, b, c, ans, k, m, l;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    memset(ara2, 0, sizeof ara2);
    l = n;
    cout << 1 << " ";
    for(i=1;i<=n;i++){
        ara2[ara[i]] = 1;
        while(l&&ara2[l]){
            l--;
        }
        ans = i - (n-l);
        cout << ans +1 <<" ";
    }
    return 0;
}
