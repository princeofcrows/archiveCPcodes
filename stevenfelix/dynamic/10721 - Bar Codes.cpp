
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

long long dp[105][105][105], n, m, k;

long long barcode(long long i, long long wdt, long long cont){
    if(i==n){
        if(cont==k) return 1;
        else return 0;
    }
    if(cont>k) return 0;
    if(dp[i][wdt][cont]!=-1) return dp[i][wdt][cont];
    long long res1, res2;
    res1 = res2 = 0;
    if(wdt<m) res1 = barcode(i+1, wdt+1, cont);
    res2 = barcode(i+1, 1, cont+1);
    return dp[i][wdt][cont] = res1+res2;
}


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, mn, d, l;
    while(cin >> n >> k >> m){
        memset(dp, -1, sizeof dp);
        cout << barcode(1, 1, 1) <<endl;
    }
    return 0;
}
















