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
string str;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k, m;
    cin >> k;
    for(i=0;i<12;i++){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ans = 0;
    i =0;
    while(ans<k&&i<12){
        ans+=v[i];
        i++;
    }
    if(ans>=k) cout << i;
    else cout << -1;
    return 0;
}
