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
vector <long long> v;
long long ara[4005];
long long dp[4005];
long long dp2[4005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k;
    cin >> a >> b;
    if(a==0&&b==0){
        cout << "NO";
        return 0;
    }
    if(abs(a-b)<=1) cout << "YES";
    else cout << "NO";
    return 0;
}















