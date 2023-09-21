#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, l, r, ans, m, k, x, y, temp;
    cin >> x >> y >> n;
    if(n%6==1) ans = x;
    else if(n%6==2) ans = y;
    else if(n%6==3) ans = y-x;
    else if(n%6==4) ans = -x;
    else if(n%6==5) ans = -y;
    else if(n%6==0) ans = x-y;
    ans%=1000000007;
    if(ans<0)cout << ans+1000000007;
    else cout << ans;
    return 0;
}

