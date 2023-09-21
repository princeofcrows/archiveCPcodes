#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < long long > xy;
vector < pair <long long, long long> > pxy;
string str, str1, str2;
long long int ara[100005];

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, s, b, t, c, d ,e;

    for(i=1;i<=3;i++){
        cin >> temp;
        xy.push_back(temp);
    }
    sort(xy.begin(), xy.end());
    cout << xy[2]-xy[0];
    return 0;
}











