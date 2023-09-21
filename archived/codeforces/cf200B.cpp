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
    long long int t, diglen, n, m, mx, mn, ans, k;
    double orng, temp;
    cin >> n;
    orng =0;
    for(int i=1; i<=n; i++){
        cin >> temp;
        orng += temp;
    }
    printf("%.8lf", orng/((double) n));
    return 0;
}
