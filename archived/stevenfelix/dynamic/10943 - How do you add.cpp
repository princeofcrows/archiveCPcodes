
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

long long ara[200005], ara2[200005];

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

long long dp[105][105];

long long coinchange(long long k, long long n){
    if(k==0){
        if(n==0) return 1;
        else return 0;
    }
    if(dp[k][n]!=-1) return dp[k][n];
    long long ans = 0;
    for(long long i=0;i<x.size();i++){
       if(n-x[i]>=0) ans += coinchange(k-1, n-x[i]);
    }
    return dp[k][n] = ans%1000000;
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, k, mn, d, l, n;
    while(1){
        cin >> n >> k;
        if(n==0&&k==0) break;
        x.clear();
        for(i=0;i<=n;i++) x.push_back(i);
        memset(dp, -1, sizeof dp);
        cout << coinchange(k, n)%1000000 <<endl;
    }
    return 0;
}















