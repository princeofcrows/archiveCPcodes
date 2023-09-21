
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

double p, q, r, s, t, u;

double incsol(){
    double i, j, m, ans;
    i = 0; j = 1;
    while(abs(i-j)>.000000001){
        m = (i+j)/2;
        ans = p*exp(-m)+q*sin(m)+r*cos(m)+s*tan(m)+t*m*m+u;
        if(ans<=0){
            i = m;
        }
        if(ans>=0){
            j = m;
        }
    }
    return m;
}

double decsol(){
    double i, j, m, ans;
    i = 0; j = 1;
    ans = 9999999;
    while(abs(i-j)>.000000001){
        m = (i+j)/2;
        ans = p*exp(-m)+q*sin(m)+r*cos(m)+s*tan(m)+t*m*m+u;
        if(ans<=0){
            j = m;
        }
        if(ans>=0){
            i = m;
        }
    }
    return m;
}


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    double n, ans, temp, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d;
    while(cin >> p){
        cin >> q >> r >> s >> t >> u;
        i = 0;
        j = 1;
        m = i;
        a = p*exp(-m)+q*sin(m)+r*cos(m)+s*tan(m)+t*m*m+u;
        m = j;
        b = ans = p*exp(-m)+q*sin(m)+r*cos(m)+s*tan(m)+t*m*m+u;;
        if(a>0&&b>0||a<0&&b<0){
            cout <<"No solution\n";
            continue;
        }
        if(a<=0&&b>=0){
            m = incsol();
        }
        if(a>=0&&b<=0){
            m = decsol();
        }
        printf("%.4lf\n", m);
    }
    return 0;
}















