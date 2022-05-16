//prince0fcr0ws
#include <bits/stdc++.h>
using namespace std;
#define MX 100005
#define int long long
int ara[MX];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int n, i, j, a, b, l, ans, x, k, c;
    cin >> n >> x >> k;
    a = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    sort(ara, ara+n);
    ans = 0;
    for(i=0;i<n;i++){
        a = ara[i];
        if(k==0){
            if(a%x==0){
                b = a+1;
                c = a+(x-a%x)-1;
            }
            else{
                b = a;
                c = a+(x-a%x)-1;
            }
            j = lower_bound(ara, ara+n, b) - ara;
            l = upper_bound(ara, ara+n, c) - ara;
            if(l<j) continue;
            ans += (l-j);
            continue;
        }
        if(a%x!=0){
            a = a+(x-a%x);
        }
        b = a + (k-1)*x;
        //if(b<ara[i]) b = ara[i];
        c = a + (k)*x -1;
        //if(c<ara[i]) c = ara[i];
        j = lower_bound(ara, ara+n, b) - ara;
        l = upper_bound(ara, ara+n, c) - ara;
        if(l<j) continue;
        ans += (l-j);
    }
    cout << ans;
    return 0;
}
