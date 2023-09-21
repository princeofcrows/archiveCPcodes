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
    long long int n, ans, temp, t, i, j, a, b, c, k, m;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    vmn[0] = abs(v[0]-v[1]);
    vmn[n-1] = abs(v[n-1]-v[n-2]);
    vmx[0] = abs(v[n-1]-v[0]);
    vmx[n-1] = abs(v[n-1]-v[0]);
    for(i=1;i<n-1;i++){
        vmn[i] = min(abs(v[i]-v[i-1]), abs(v[i]-v[i+1]));
    }
    for(i=1;i<n-1;i++){
        vmx[i] = max(abs(v[i]-v[0]), abs(v[i]-v[n-1]));
    }
    for(i=0;i<n;i++){
        cout << vmn[i] <<" "<<vmx[i]<<endl;
    }
    return 0;
}
