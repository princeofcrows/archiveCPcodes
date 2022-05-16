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
    long long n, temp, k, r, avg, t2, temp2, j, ans, t, m, a, b, i;
    cin >> n >> m;
    cout << min(n, m)+1<<endl;
    for(i=0; i<=min(n,m); i++){
        cout << i <<" "<<min(n,m)-i<<endl;
    }
    return 0;
}






