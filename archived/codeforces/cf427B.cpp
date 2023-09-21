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
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    long long n, temp, k, r, avg, t2, temp2, j, ans, t, m, a, b, i, c;
    cin >> n >> t >> c;
    for(i=0; i<n; i++){
        cin >> temp;
        x.push_back(temp);
    }
    temp = 0;
    ans = 0;
    for(i=0; i<n; i++){
        if(x[i]>t){
            if(i-temp>=c) ans += (i-temp)-c+1;
            temp = i+1;
        }
    }
    if(i-temp>=c) ans += (i-temp)-c+1;
    cout << ans ;
    return 0;
}






