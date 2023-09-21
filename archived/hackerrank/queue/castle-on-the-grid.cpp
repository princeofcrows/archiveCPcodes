#include <map>
#include <set>
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

char ara[105][105];
int n, a, b, c, d;
int dp[105][105];

int shpth(int a, int b){
    if(a<0||a>=n||b<0||b>=n) return 0;
    if(dp[a][b]!=-1) return dp[a][b];
    if(ara[a][b]=='X') return 0;
    if(a==c&&b==d) return 0;
    return dp[a][b] = min(shpth(a+1,b), min(shpth(a, b+1), min(shpth(a-1, b), shpth(a, b-1))))+1;
}

int main() {
    freopen("in.txt", "r", stdin);
    int i, j;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> ara[i];
    }
    cin >> a >> b >> c >> d;
    memset(dp, -1, sizeof dp);
    cout << shpth(a, b) <<endl;
    return 0;
}
