#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
vector <long long> x;
vector <long long> y;

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ans;
    cin >> n;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> temp;
        if(temp>=0){
            ans+=temp;
            x.push_back(temp);
        }
        else{
            y.push_back(temp);
        }
    }
    if(x.size()!=0) sort(x.begin(), x.end());
    if(y.size()!=0) sort(y.begin(), y.end());
    reverse(y.begin(), y.end());
    if(ans%2){
        cout << ans;
        return 0;
    }
    a = 99999999;
    for(i=0;i<x.size();i++){
        if(x[i]%2){
            a = x[i];
            break;
        }
    }
    for(i=0;i<y.size();i++){
        if((-y[i])%2){
            a = min(-y[i], a);
            break;
        }
    }
    cout << ans-a;
    return 0;
}
