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

long long ara2[200005], ara3[200005], ara[200005];

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

long long ncr[35][35];
map <long long, long long> dat;
long long n;

map <pair <long long, long long>, long long> dp;

long long coinchange(long long i, long long p){
    if(i>=x.size()){
        return 1;
    }
    if(dp[{p, i}]) return dp[{p, i}];
    long long ret1, ret2;
    ret1 = ret2 = 0;
    if(p/x[i]>0) ret1 = coinchange(i+1, p/x[i]);
    ret2 = coinchange(i+1, p);
    return dp[{p, i}] = ret1+ret2;
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, pk, f, l, ones;
    long long p, k;
    cin >> n >> k;
    ones = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
        if(ara[i]==1){
            ones++;
            continue;
        }
        if(ara[i]<=k){
            x.push_back(ara[i]);
            //cout << ara[i] << " ";
        }
    }
    c = 1;
    for(i=0;i<x.size();i++){
        if(k/x[i]>=c){
            c *= x[i];
        }
        else break;
    }
    a = 0;
    if(i==x.size()) a = pow(2, x.size());
    else a = coinchange(0, k);
    a--;
    a = a+a*(pow(2, ones)-1)+pow(2, ones)-1;
    cout << a;
    return 0;
}











