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

long long dp[1005][1005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> k >> a >> b;
    n = (a/k);
    m = (b/k);
    if(n==0&&m==0&&(a+b)!=0){
        cout << -1;
    }
    else if((n*k+((k-1)*m)+m*k+((k-1)*n))<a+b){
        cout << -1;
    }
    else if(n==0&&(b%m!=0)){
        cout << -1;
    }
    else if(m==0&&(a%n!=0)){
        cout << -1;
    }
    else if(m!=0&&(k-1)*n<b%k){
        cout << -1;
    }
    else if(n!=0&&(k-1)*m<a%k){
        cout << -1;
    }
    else{
        cout << n+m;
    }
    return 0;
}









