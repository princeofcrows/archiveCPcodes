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
vector <long long> vmx(100005, 0);
vector <long long> vmn(100005, INT_MAX);
long long ara[4005];
long long dp[4005];
long long dp2[4005];
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, d, k, m, s;
    cin >> n >> d;
    s = 0;
    for(i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
        s += temp;
    }
    if(s+(n-1)*10>d){
        cout << -1;
        return 0;
    }
    ans  = (n-1)*2+ (d-(n-1)*10-s)/5;
    cout << ans;
    return 0;
}









