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

int main() {
    //freopen("in.txt", "r", stdin);
    long long int temp, t, diglen, i, a, n, b, ans, temp2, k;
    cin >> str ;
    n = str.length();
    a = n-1;
    for(i=0; i<n; i++){
        if(str[i]=='0'){
            a = i;
            break;
        }
    }
    for(i=0; i<n; i++){
        if(i==a) continue;
        cout << str[i];
    }
    return 0;
}
