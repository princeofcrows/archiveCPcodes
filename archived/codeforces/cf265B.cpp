#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
long long int ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, l, r, ans, m, k;
    cin >> n ;
    for(i=0; i<n; i++){
        cin >> ara[i];
    }
    ans = ara[0]+n;
    for(i=1; i<n; i++){
        ans += abs(ara[i]-ara[i-1])+1;
    }
    cout << ans;
    return 0;
}

