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
vector <long long int> y;
int ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s, n, i, j, k, mx;
    cin >> n;
    ara[0] = 0;
    mx = 0;
    for(i=1;i<=n;i++){
        cin >> ara[i];
        if(mx<ara[i]) mx = ara[i];
    }
    cout << mx;
    return 0;
}






