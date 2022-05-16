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
    ans = 0;
    a = b = 0;
    for(i=1; i<=3; i++){
        cin >> temp;
        a+=temp;
    }
    for(i=1; i<=3; i++){
        cin >> temp;
        b+=temp;
    }
    cin >> n;
    ans += (a/5)+((a%5)&&1)+((b%10)&&1)+b/10;
    if(ans>n)cout <<"NO";
    else cout << "YES";
    return 0;
}















