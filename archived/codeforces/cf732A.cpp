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
    cin >> k >> t;
    ans = k;
    i = 2;
    temp = 1;
    while(ans%10!=t&&ans%10!=0){
        ans = k*i;
        i++;
        temp++;
    }
    cout << temp;
    return 0;
}















