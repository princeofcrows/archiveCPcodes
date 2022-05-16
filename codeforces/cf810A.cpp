////////////////////////////////////////////////////////////////////////
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

bool flagar[200005], flagar2[200005];
long double ara[10005];

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
map <long long, long long> dat[100005];

int main() {
    //freopen("in.txt", "r", stdin);
    long double n, ans, temp, t, m, h, h2, m2, c, a, b, mx, d, k;
    long long i, j, an;
    cin >> n >> k;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> ara[i];
        ans+=ara[i];
    }
    temp = ans/n;
    t = k-0.5;
    m = 0;
    an = 0;
    while(temp<t){
        m+=1;
        an++;
        ans+=k;
        temp = ans/(n+m);
    }
    cout << an;
    return 0;
}











