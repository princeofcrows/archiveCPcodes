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
    if(m>n*n){
        cout << 0;
        return 0;
    }
    temp = 0;
    for(i=1; i*i<=m; i++){
        if(m%i==0&&i<=n&&(m/i)<=n){
            if(i!=(m/i)) temp+=2;
            else temp++;
        }
    }
    cout << temp;
    return 0;
}















