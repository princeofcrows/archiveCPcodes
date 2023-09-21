
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

string str, str1, str2, star[2000];

long long ara[200005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    if(i.first==j.first) return (i.second<j.second);
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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> star[i];
    }
    bool flag[n+5][n+5];
    memset(flag, false, sizeof flag);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            ans = 0;
            if(i>0&&star[i-1][j]=='o')ans++;
            if(i<n-1&&star[i+1][j]=='o')ans++;
            if(j<n-1&&star[i][j+1]=='o')ans++;
            if(j>0&&star[i][j-1]=='o')ans++;
            if(ans%2){
                cout <<"NO";
                return 0;
            }
        }
    }
    cout <<"YES";
    return 0;
}


















