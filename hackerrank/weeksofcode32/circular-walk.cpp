
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

long long ara2[1000005], sz[200005];

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

long long R[10000005];
vector < vector <long long> > graph(10006);



int main() {
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d, r, s, g, sed, p;
    cin >> n >> s >> t;
    cin >> R[0] >>g >> sed >> p;
    for(i=1;i<n;i++){
        R[i] = (R[i-1]*g+sed)%p;
    }
    ans = 1;
    i = s;
    j = s+R[s];
    if(j>=n) j = j-n;
    a = j;
    for(i=i;i!=j;i++){
        if(i==t) break;
        if(i==n) i = 0;
        j = max(j, i+R[i]);
        if(j>=n) j = j-n;
        if(i==a){
            ans++;
            a = j;
        }
    }
    if(i==t){
        mx = ans;
        c = 1;
    }
    else{
        mx = 1e15;
        c = 0;
    }
    ans = 1;
    i = s;
    j = s-R[s];
    if(j<0) j = 0;
    a = j;
    for(i=i;i!=j;i--){
        if(i==t) break;
        if(i==-1) i = n-1;
        j = min(j, i-R[i]);
        if(j<0) j = n+j;
        if(i==a){
            ans++;
            a = j;
        }
    }
    if(i==t){
        mn = ans;
        d = 1;
    }
    else{
        mn = 1e15;
        d = 0;
    }
    if(c==0&&d==0){
        cout << -1;
        return 0;
    }
    cout << min(mx, mn);
    return 0;
}















