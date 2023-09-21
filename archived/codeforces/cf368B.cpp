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
string str;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    long long n, temp, k, r, avg, t2, temp2, j, ans, t, m, a, b, i;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> temp;
        x.push_back(temp);
    }
    y.push_back(0);
    bool ara[100005];
    memset(ara, false, sizeof ara);
    for(i=1; i<=n; i++){
        if(ara[x[n-i]]) y.push_back(y[i-1]);
        else{
            y.push_back(y[i-1]+1);
            ara[x[n-i]] = true;
        }
    }
    for(i=0; i<m; i++){
        cin >> temp;
        cout << y[n-temp+1]<<endl;
    }
    return 0;
}






