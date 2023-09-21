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
    cin >> n >> m;
    ans = 0;
    vector <long long int> x;
    for(int i=1; i<=n; i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    for(int i=0; i<m; i++){
        temp = x[i];
        if(temp<0)ans+=temp;
    }
    cout << ans*-1;
    return 0;
}
