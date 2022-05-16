#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, diglen, i;
    cin >> n;
    vector <long long int> x;
    for(i=0;i<n;i++){
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(),x.end());
    ans = 0;
    temp=2;
    for(i=0;i<n;i++){
        ans+=(temp++)*x[i];
    }
    cout << ans-x[n-1];
    return 0;
}
