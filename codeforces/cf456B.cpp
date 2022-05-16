#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int t, i, j, n, l, r, ans, m, k, x;
    string s;
    cin >> s;
    ans = 0;
    if(((s[s.length()-1]-'0')+(s[s.length()-2]-'0')*10)%4==0) cout << 4;
    else cout <<0;
    return 0;
}

