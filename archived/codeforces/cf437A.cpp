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

string str, str1, str2, star[200000], str3;

long long ara[200005], ara2[200005], ara3[200005];

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
map <long long, long long> home;
map <long long, long long> away;

void f(long long n){
    if(n==0) return;
    f(n-1);
    swap(ara[n],ara[n-1]);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    for(i=0;i<4;i++){
        cin >> str;
        n = str.length()-2;
        xy.push_back({n, i});
    }
    sort(xy.begin(), xy.end()); a = b = c = 0;
    for(i=0;i<3;i++){
        if(2*xy[0].first<=xy[i+1].first){
            b++;
            j =xy[0].second;
        }
    }
    if(b==3){
         c++;
         m = j;
    }
    for(i=3;i>=1;i--){
        if(xy[3].first>=2*xy[i-1].first){
            a++;
            h =xy[3].second;
        }
    }
    if(a==3){
        c++;
        m = h;
    }
    if(c==1) cout << (char)(m+'A');
    else cout << 'C';
    return 0;
}




















