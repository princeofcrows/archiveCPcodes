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
    double n, temp, k, r, avg, t2, temp2, j, ans, t, m;
    cin >> m >> n;
    ans = pow(1/m, n);
    for(j=2; j<=m; j++){
        t2 = pow(j/m, n) - pow((j-1)/m, n);
        ans+= (t2*j);
    }
    printf("%.8lf", ans);
    return 0;
}






