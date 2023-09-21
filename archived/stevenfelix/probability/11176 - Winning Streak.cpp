#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt", "r", stdin);
    double n, p, ans, idx;
    while(cin >> n >> p){
        if(n==0) break;
        ans = 0;
        for(int i=1; i<=(int) n; i++){
            idx = (double) i;
            ans += (n-idx+1)*pow(p, idx)*pow(1.0-p, n-idx)*idx;
        }
        printf("%.5lf\n", ans);
    }
    return 0;
}
