#include <bits/stdc++.h>
using namespace std;
int ara[405];

int main(){
    //freopen("in.txt", "r", stdin);
    int n, i, j, a, b, l, ans;
    cin >> n;
    a = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
        a += ara[i];
    }
    ans = 10000000;
    for(i=0;i<n;i++){
        b = 0;
        for(j=0;j<n;j++){
            l = i+j;
            l%=n;
            b+=ara[l];
            ans = min(ans, abs(a-2*b));
        }
    }
    cout << ans;
    return 0;
}
