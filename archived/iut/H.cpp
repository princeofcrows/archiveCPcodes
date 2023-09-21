#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    int t, a, b, c;
    cin >> t;
    c = 1;
    while(t--){
        cin >> a >> b;
        printf("Case %d: %d\n", c++, a*a+b*b);
    }
    return 0;
}
