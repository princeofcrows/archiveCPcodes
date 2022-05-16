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

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, n, m, mx, mn;
    cin >> n >>m;
    mx = (n-m+1)*(n-m)/2;
    temp = n%m;
    mn = (m-temp)*(n/m)*(n/m-1)/2;
    mn += temp*(n/m+1)*(n/m)/2;
	cout <<mn <<" "<<mx;
    return 0;
}
