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
int ara[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int a, b, c, x, s, n, i, j, k, mx;
    cin >> n;
    i = 2;
    cout << n << " ";
    while(n!=1){
        if(n%i==0){
            n/=i;
            cout << n << " ";
        }
        else i++;
    }
    return 0;
}






