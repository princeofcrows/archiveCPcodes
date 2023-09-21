#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
string str;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, k, r, avg, t2, temp2, j, ans, t;
    cin >> n;
    t = 1;
    j = n;
    r = 0;
    ans = 0;
    while(t!=n){
        ans += t*j-r;
        j--;
        t++;
        r++;
    }
    cout << ans+1;
    return 0;
}






