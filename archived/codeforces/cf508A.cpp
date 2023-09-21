/////////////////////////////////////////////////////////////////////////
//.....................................................................//
///////////__jasper_skywalker__fsociety()__BUET_mushroom__///////////////
//.....................................................................//
/////////////////////////////////////////////////////////////////////////

#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

vector <pair <long long, long long> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
vector <long long> z;

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first>j.first);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long grid[1005][1005];
bool flag[1005][1005];
int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> m >> k;
    memset(grid, 0, sizeof grid);
    memset(flag, true, sizeof flag);
    for(a=0;a<k;a++){
        cin >> i >> j;
        grid[i][j] = 1;
        if(grid[i][j]&&grid[i+1][j]&&grid[i][j+1]&&grid[i+1][j+1]){
            cout << a+1;
            return 0;
        }
        if(grid[i][j]&&grid[i-1][j]&&grid[i][j-1]&&grid[i-1][j-1]){
            cout << a+1;
            return 0;
        }
        if(grid[i][j]&&grid[i-1][j]&&grid[i][j+1]&&grid[i-1][j+1]){
            cout << a+1;
            return 0;
        }
        if(grid[i][j]&&grid[i+1][j]&&grid[i][j-1]&&grid[i+1][j-1]){
            cout << a+1;
            return 0;
        }
    }
    ans = 0;
    cout << ans;
    return 0;
}













