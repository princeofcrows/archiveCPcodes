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
    t = 0;
    for(int i=0; i<n;i++){
        cin >> temp;
        if(temp>t) t = temp;
        x.push_back(temp);
    }
    ans = 0;
    for(int i=0; i<n;i++){
        ans+=t-x[i];
    }
    cout << ans;
    return 0;
}
