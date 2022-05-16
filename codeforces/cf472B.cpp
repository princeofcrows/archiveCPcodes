#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector <long long> x;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, diglen, i, k;
    cin >> n >> k;
    for(i=0; i<n;i++){
        cin>>temp;
        x.push_back(temp-1);
    }
    sort(x.begin(), x.end());
    ans = 0;
    for(i=n-1; i>=0;i-=k){
        ans+=2*(x[i]);
    }
    cout << ans;
    return 0;
}
