#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, ans;
    cin >> a >> b;
    ans = 1;
    for(long long i=a+1;i<=b;i++){
        ans *= (i%1000000);
        ans%=1000000;
        if(!ans%10) break;
    }
    cout << ans%10;
    return 0;
}
