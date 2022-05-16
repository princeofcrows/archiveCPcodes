
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

long long ara[200005];

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

long double powr(long double n, long double ne){
    if(n==1.0) return ne;
    long double e = powr(n/2.0, ne);
    e = e*e;
    if(n/2.0!=floor(n/2.0)) e = e*ne;
    return e;
}


int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    long double ne = 100000000000000000.0;
    long double n = ne;
    ne = (ne+1)/ne;
    long double e;
    e = powr(n, ne);
    cout.precision(15);
    cout << e;
    return 0;
}















