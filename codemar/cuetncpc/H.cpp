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
vector < vector <long long> > pom(105);

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


int main(){
    freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i,h, h2, m2, c, a, b, mx, d, a2, d2, k2, k, n, m;
    scanf("%lld", &t);
    j = 1;
    while(t--){
        scanf("%lld%lld", &n, &m);
        i = 2;
        ans = n-1;
        while(i!=n){
            ans*=(n-i);
            ans%=23377788;
            i++;
        }
        while(i!=m){
            ans*=(m-n);
            ans%=23377788;
            i++;
        }
        printf("Case %lld: %lld\n", j, ans);
        j++;
    }
    return 0;
}


















