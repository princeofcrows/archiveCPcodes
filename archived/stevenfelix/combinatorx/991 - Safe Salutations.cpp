#include <bits/stdc++.h>
#define int long long

using namespace std;

string str, a, b;
int ncr[52][52];

int32_t main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int i, j, t, n, k, p, r, c, ans;
    c = 0;
    while(cin >> n){
        if(c) cout << endl;
        c = 1;
        ans = 1;
        for(i=1;i<=2*n;i++){
            ans*=i;
        }
        for(i=1;i<=n;i++){
            ans /= (i*i);
        }
        ans /= (n+1);
        cout << ans << endl;
    }
    return 0;
}
