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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, p, q, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y >> p >> q;
        c = 1;
        d = q-p;
        if(d==0){
            if(x==y) cout << 0;
            else cout << -1;
            cout << endl;
            continue;
        }
        mx = 999999999;
        for(b=0;b<=10000;b++){
            temp = p*y-q*x+p*b;
            a = (p*y-q*x+p*b)/d;
            if(temp%d==0&&a>=0){
                mx = min(a+b, mx);
                c = 0;
            }
        }
        if(c==1) cout << -1;
        else cout << mx;
        cout << endl;
    }
    return 0;
}
