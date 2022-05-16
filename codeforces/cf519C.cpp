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
    long long int n, ans, temp, t, diglen, i, a, b;
    cin >> a >> b;
    ans = 0;
    while(a>0&&b>0&&a+b>=3){
        if(a>b){
            a-=2;
            b--;
            ans++;
        }
        else{
            b-=2;
            a--;
            ans++;
        }
    }
    cout << ans;
    return 0;
}
