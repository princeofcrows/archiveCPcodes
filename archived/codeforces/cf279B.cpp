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
    cin >> n >> t;
    vector <long long int> x;
    x.push_back(0);
    for(int i=1; i<=n; i++){
        cin >> temp;
        x.push_back(x[i-1]+temp);
    }
    ans =0;
    if(x[n]<=t){
        cout << n;
        return 0;
    }
    for(int i=1; i<=n; i++){
        temp = x[i];
        mx = lower_bound(x.begin(), x.end(), t+temp)-x.begin();
        if(x[mx]-x[i]==t){
            if(mx-i>ans){
                ans= mx-i;
            }
        }
        else if(mx-i-1>ans){
            ans= mx-i-1;
        }
    }
    cout << ans;
    return 0;
}
