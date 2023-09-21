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
char ara[1005][6];
vector <long long> v;
long long dp[4005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k;
    cin >> n >> k;
    temp = 0;
    t = 240 - k;
    for(i=1; i<=n; i++){
        temp+=i;
        if(temp*5>t) break;
    }
    cout << i-1;
    return 0;
}















