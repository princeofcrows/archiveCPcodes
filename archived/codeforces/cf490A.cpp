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
vector < vector <long long> > ve(5);

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, i, j, a, b, c, k, mx, m;
    cin >> n;
    for(i=0;i<n;i++){
        cin >>a;
        ve[a].push_back(i+1);
    }
    temp = min(ve[1].size(), min(ve[2].size(), ve[3].size()));
    cout << temp << endl;
    for(i=0;i<temp; i++){
        cout << ve[1][i] <<" "<<ve[2][i] <<" "<<ve[3][i] <<" "<<endl;
    }
    return 0;
}















