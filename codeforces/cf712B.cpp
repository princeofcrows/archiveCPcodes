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


int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k1, k2;
    cin >> str;
    n = str.length();
    a = b = 0;
    for(i=0;i<n;i++){
        if(str[i]=='R')a++;
        if(str[i]=='L')a--;
        if(str[i]=='U')b++;
        if(str[i]=='D')b--;
    }
    a = abs(a);
    b = abs(b);
    ans = 0;
    if(a%2&&b%2){
        a--;
        b--;
        ans++;
        ans+=(a+b)/2;
    }
    else if(a%2==0&&b%2==0){
        ans+=(a+b)/2;
    }
    else{
        ans = -1;
    }
    cout << ans;
    return 0;
}













