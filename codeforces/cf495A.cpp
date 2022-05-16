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

string str, str1, str2, star[2000], str3;

long long ara[1000005], ara2[200005];

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

long long pos[1005], neg[1005], neg1[1005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> str1;
    if(str1[0]=='0') a = 2;
    if(str1[0]=='1') a = 7;
    if(str1[0]=='2') a = 2;
    if(str1[0]=='3') a = 3;
    if(str1[0]=='4') a = 3;
    if(str1[0]=='5') a = 4;
    if(str1[0]=='6') a = 2;
    if(str1[0]=='7') a = 5;
    if(str1[0]=='8') a = 1;
    if(str1[0]=='9') a = 2;
    b = a;
    if(str1[1]=='0') a = 2;
    if(str1[1]=='1') a = 7;
    if(str1[1]=='2') a = 2;
    if(str1[1]=='3') a = 3;
    if(str1[1]=='4') a = 3;
    if(str1[1]=='5') a = 4;
    if(str1[1]=='6') a = 2;
    if(str1[1]=='7') a = 5;
    if(str1[1]=='8') a = 1;
    if(str1[1]=='9') a = 2;
    cout << a*b;
    return 0;
}























