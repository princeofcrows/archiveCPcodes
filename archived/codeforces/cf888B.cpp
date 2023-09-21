#include <bits/stdc++.h>
using namespace std;
#define MX 1005

int ara[MX];

string str;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, k, l, n, ans, a, b;
    cin >> n;
    cin >> str;
    a = b = 0;
    for(i=0;i<n;i++){
        if(str[i]=='U') b++;
        if(str[i]=='D') b--;
        if(str[i]=='L') a--;
        if(str[i]=='R') a++;
    }
    cout << n - abs(a) - abs(b);
    return 0;
}
