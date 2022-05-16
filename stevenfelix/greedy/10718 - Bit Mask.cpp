
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

long long ara2[200005];

bool check(long long N, long long pos){
    long long c = 1;
    return (bool)(N&(c<<pos));
}

long long Set(long long N, long long pos){
    long long c = 1;
    return N = N|(c<<pos);
}
long long unSet(long long N, long long pos){
    long long c = 1;
    return N = N&~(c<<pos);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d, r, l, u;
    d = 1;
    while(cin >> n >> l >> u){
        ans= 0;
        for(i=31;i>=0;i--){
            //cout << i << endl;
            if(check(n, i)==false){
                a = Set(ans, i);
                if(a<=u) ans = a;
            }
            else{
                a = Set(ans, i);
                if(a<=l) ans = a;
            }
        }
        cout << ans << endl;
    }
    return 0;
}















