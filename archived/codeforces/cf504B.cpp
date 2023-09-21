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
vector <long long> x;

int main() {
    //freopen("in.txt", "r", stdin);
    double x, y, r, x1, y1, ans;
    cin >> r >> x >> y >> x1 >> y1;
    ans = ceil(sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1))/(2*r));
    cout << (int)ans;
    return 0;
}
