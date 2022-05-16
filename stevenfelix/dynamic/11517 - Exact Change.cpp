
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
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

string str, str1, str2;

long long ara[200005], sz[200005];

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
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//

long long dp[11111][111], n, m;

long long coinsum(long long i, long long tc){
    if(tc>=m) return tc;
    if(i>=n) return 9999999999;
    if(dp[tc][i]!=-1) return dp[tc][i];
    return dp[tc][i] = min(coinsum(i+1, tc+ara[i]), coinsum(i+1, tc));
}

long long coinnum(long long i, long long tc){
    if(tc==0) return 0;
    if(tc<0) return 999999999;
    if(i>=n) return 9999999999;
    if(dp[tc][i]!=-1) return dp[tc][i];
    return dp[tc][i] = min(coinnum(i+1, tc-ara[i])+1, coinnum(i+1, tc));
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, mn, d, l;
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        memset(dp, -1, sizeof dp);
        ans = coinsum(0, 0);
        memset(dp, -1, sizeof dp);
        a = coinnum(0, ans);
        cout << ans <<" "<<a<<endl;
    }
    return 0;
}















