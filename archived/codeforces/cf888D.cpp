#include <bits/stdc++.h>
using namespace std;
#define MX 1005
#define int long long

int ara[MX];

string str;
vector <int> g[30];

int fact(int k){
    if(k==0) return 1;
    return k*fact(k-1);
}

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, ans, a, b;
    cin >> n >> k;
    ans = 0;
    for(i=2;i<=k;i++){
        if(i==2) b = 1;
        if(i==3) b = 2;
        if(i==4) b = 9;
        a = 1;
        for(j=n;j>(n-i);j--){
            a*=j;
        }
        a = a/(fact(i));
        ans += b*a;
    }
    cout << ans+1;
    return 0;
}
