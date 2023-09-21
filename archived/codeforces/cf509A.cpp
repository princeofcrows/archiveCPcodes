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

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, s, b, t, c, d ,e;
    cin >> n;
    long long ara[n+5][n+5];
    for(i=0; i< n; i++){
        ara[i][0] = 1;
        ara[0][i] = 1;
    }
    for(i=1; i< n; i++){
        for(j=1; j< n; j++){
            ara[i][j] = ara[i-1][j]+ara[i][j-1];
        }
    }
    cout << ara[n-1][n-1];
    return 0;
}











