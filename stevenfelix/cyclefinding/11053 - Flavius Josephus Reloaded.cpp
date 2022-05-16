#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    //freopen("in.txt", "r", stdin);
    ll n, a, b, x, j, ans;
    while(scanf("%lld", &n)){
        if(n==0) break;
        scanf("%lld%lld", &a, &b);
        map <ll, ll> dat;
        j = 1;
        dat[0] = j;
        x = 0;
        while(1){
            j++;
            x = ((((x*x)%n)*a)%n+b)%n;
            if(dat[x]){
                ans = j-dat[x];
                break;
            }
            dat[x] = j;
        }
        printf("%lld\n", n-ans);
    }
    return 0;
}
