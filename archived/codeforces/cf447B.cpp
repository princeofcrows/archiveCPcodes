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
vector <long long int> y;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s, n, i, j, k, mx;
    cin >> str;
    cin >> k;
    n = str.length();
    mx = 0;
    for(i=0; i<26; i++){
        cin >> a;
        y.push_back(a);
        if(mx<a){
            mx = a;
        }
    }
    a = 0;
    for(i=0; i<n; i++){
        a+=(i+1)*y[str[i]-'a'];
    }
    a+=((n+k)*(n+k+1)/2-(n+1)*(n)/2)*mx;
    cout << a;
    return 0;
}






