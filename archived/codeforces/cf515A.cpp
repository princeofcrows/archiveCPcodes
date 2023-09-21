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
    cin >> a >> b >> s;
    if(abs(a)+abs(b)>s){
        cout << "No";
        return 0;
    }
    if((s-abs(a)-abs(b))%2){
        cout << "No";
        return 0;
    }
    else{
        cout << "Yes";
        return 0;
    }
    return 0;
}









