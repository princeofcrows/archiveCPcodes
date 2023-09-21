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

vector < vector <long long> > v(105);

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, m, i, j, mx, idx, temp, ans, stf;
    cin >> n;
    temp = n;
    ans = 0;
    stf = 1;
    while(temp!=0){
        i = temp%10;
        temp/=10;
        if(temp==0&&i==9) i = 9;
        else if(i>=5) i = 9-i;
        ans += i*stf;
        stf*=10;
    }
    cout << ans;
    return 0;
}
