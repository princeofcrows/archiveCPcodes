#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
long long int ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, l, r, ans, m, k;
    cin >> n ;
    ans =0;
    for(i=0; i<n; i++){
        cin >> t;
        ans^=t;
    }
    m = ans;

    for(i=1; i<n; i++){
        cin >> t;
        m^=t;
    }
    cout << m<<endl;
    m = ans^m;
    for(i=1; i<n-1; i++){
        cin >> t;
        m^=t;
    }
    cout << m <<endl;
    return 0;
}

