#include <bits/stdc++.h>

using namespace std;
#define MX 2005
#define int long long

int ara[MX], ara2[MX];
vector <int> x;

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, a, t;
    a = 1000000;
    int c = 0;
    cin >> n;
    t = 0;
    int g = 0;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        if(ara[i]==1) t++;
        g = __gcd(g, ara[i]);
    }
    if(t){
        cout << n-t;
        return 0;
    }
    if(g!=1){
        cout << -1;
        return 0;
    }
    for(i=1;i<=n;i++){
        g = ara[i];
        for(j=i+1;j<=n;j++){
            g = __gcd(g, ara[j]);
            if(g==1){
                a = min(a, j-i+n-1);
                c  = 1;
            }
        }
    }
    cout << a;
    return 0;
}
