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
    long long int n, ans, temp, t, i, j, a, b, c, k, m;
    cin >> n >> m;
    char ch;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> ch;
            if(ch!='W'&&ch!='B'&&ch!='G'){
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
    return 0;
}















