#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

bool check(long long int N, long long int pos){return N&(1<<pos);}

int checknum(long long int a, long long int b){
    long long mx = max(log2(a), log2(b));
    long long k=0;
    for(int i=0; i<=mx; i++){
        if(check(a, i)!=check(b, i)) k++;
    }
    return k;
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, l, r, ans, m, k;
    long long int typ[1005];
    cin >> n >> m >> k;
    for(i=0; i<=m; i++){
        cin >> typ[i];
    }
    ans = 0;
    for(i=0; i<m; i++){
        if(checknum(typ[m], typ[i])<=k) ans++;
    }
    cout << ans;
    return 0;
}

