#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, A, s, k, x, y;
    cin >> A >> s >> k >> x >> y;
    a = (s-A+y*k)/(x+y);
    if(a<0) cout << -1;
    else if((s-A+y*k)%(x+y)) cout << -1;
    else cout << a;
    return 0;
}
