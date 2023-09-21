#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, a, b, c, d, ans, mod, e;
    mod =1000000009;
    cin >> n >> m >> k;
    c = 1;
    while(1){
        a = m/(c*k-1);
        e = (m%(c*k-1));
        b = (n-m);
        d = min(a, b);
        ans +=
        c++;
        if(m<=0) break;
    }
    return 0;
}
