#include <bits/stdc++.h>

using namespace std;

#define MX 1000005
#define int long long

int ara[MX];

int check(int sum, int a, int b){
    while(sum){
        if(sum%10!=a&&sum%10!=b) return false;
        sum/=10;
    }
    return true;
}

int bigmod(int a, int b, int m){
    if(b==0) return 1%m;
    int x = bigmod(a, b/2, m);
    x = x*x;
    x %= m;
    if(b%2) x *= a;
    x %= m;
    return x;
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    int a, b, c, n, i, j, ans, m,d;
    m = 1000000007;
    cin >> a >> b >> n;
    ans = 0;
    ara[0] = 1;
    for(i=1;i<=n;i++){
        ara[i] = ara[i-1]*i;
        ara[i]%=m;
    }
    for(i=0;i<=n;i++){
        c = i*a + (n-i)*b;
        if(check(c, a, b)){
            c = bigmod(ara[n-i], m-2, m);
            d = bigmod(ara[i], m-2, m);
            j = (c*d)%m;
            j = (j*ara[n])%m;
            ans += j;
            ans %=m;
        }
    }
    cout << ans;
    return 0;
}








