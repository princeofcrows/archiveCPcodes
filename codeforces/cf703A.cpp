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
    cin >> n;
    j = k = 0;
    for(i=0;i<n;i++){
        cin >> a >> b;
        if(a>b)j++;
        if(b>a)k++;
    }
    if(j>k) cout << "Mishka";
    if(k>j) cout << "Chris";
    if(k==j) cout <<"Friendship is magic!^^";
    return 0;
}















