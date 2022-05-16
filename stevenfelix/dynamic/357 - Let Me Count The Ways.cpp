
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

long long ara2[20], dp[30005][6];

long long coinchange(long long n, long long i){
    if(i>=5){
        if(n==0) return 1;
        else return 0;
    }
    if(dp[n][i]!=-1) return dp[n][i];
    long long res1, res2;
    res1 = res2 = 0;
    if(n-ara2[i]>=0) res1 = coinchange(n-ara2[i], i);
    res2 = coinchange(n, i+1);
    return dp[n][i] = res1+res2;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d;
    ara2[0] = 1;
    ara2[1] = 5;
    ara2[2] = 10;
    ara2[3] = 25;
    ara2[4] = 50;
    memset(dp, -1, sizeof dp);
    coinchange(30000, 0);
    while(cin >> n){
        ans = dp[n][0];
        if(ans==1) cout << "There is only 1 way to produce "<< n <<" cents change.\n";
        else cout << "There are "<<ans<< " ways to produce "<< n <<" cents change.\n";
    }
    return 0;
}















