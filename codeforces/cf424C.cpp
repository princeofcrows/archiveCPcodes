#include <bits/stdc++.h>
using namespace std;
#define MX 1000004
#define int long long
int ara[MX], ara2[MX];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, i, j, l, a;
    cin >> n;
    a = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
        a ^= ara[i];
    }
    l = 0;
    for(i=0;i<=n;i++){
        l ^= i;
        ara2[i] = l;
    }
    for(i=2;i<=n;i++){
        if((n/i)%2==0){
            a ^= ara2[n%i];
        }
        else{
            a ^= (ara2[n%i]^ara2[i-1]);
        }
    }
    cout << a;
    return 0;
}
