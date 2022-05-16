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
    long long int n, ans, temp, t, i, j, a, b, c, k, mx, m;
    cin >> n >> m;
    if(m>n){
        cout << -1;
        return 0;
    }
    temp = n/2+(n%2);
    while(temp%m){
        temp++;
    }
    if(temp>n){
        cout << -1;
        return 0;
    }
    cout << temp;
    return 0;
}















