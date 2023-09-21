#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

long long int ara[1000006];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, n, m, mx, mn, ans, k;
    cin >> n >> k;
    ara[0]=0;
    for(int i=1; i<=n; i++){
        cin >> temp;
        ara[i] = ara[i-1]+temp;
    }
    mn = INT_MAX;
    for(int i=0; i<=n-k; i++){
        if(ara[i+k]-ara[i]<mn){
            mn = ara[i+k]-ara[i];
            ans = i+1;
        }
    }
    cout << ans;
    return 0;
}
