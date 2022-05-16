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
    long long x, y, r, x1, y1, ans, a, b;
    cin >> a >> b;
    if(a<b) cout <<-1;
    else printf("%.10lf", (a+b)/(2.0*((a+b)/(2*b))));
    return 0;
}
