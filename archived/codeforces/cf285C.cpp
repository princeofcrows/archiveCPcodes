#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <long long int> x;
int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    ans = 0;
    for(i=0;i<n;i++){
        ans+=abs(i+1-x[i]);
    }
    cout << ans;
    return 0;
}
