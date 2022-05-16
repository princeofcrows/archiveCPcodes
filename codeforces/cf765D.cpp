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

long long ara[100005], ara2[200005];

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

long long dp[1005][1005];

long long g[100005];
long long h[100005];

int main() {
    freopen("in.txt", "r", stdin);
    long long int n, temp, t, j, i, m, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    bool flag = false;
    for(i=0;i<n;i++){
        cin >> ara[i];
        if(!flag&&i+1==ara[i]){
            j = i+1;
            flag = true;
        }
    }
    if(!flag){
        cout << "-1";
        return 0;
    }
    memset(g, 0, sizeof g);
    for(i=0;i<n;i++){
        h[i] = ara[i];
        g[ara[i]-1] = i+1;
    }
    for(i=0;i<n;i++){
        if(g[i]==0) g[i] = j;
    }
    cout << n << endl;
    for(i=0;i<n;i++){
        cout << g[i] << " ";
    }
    cout << endl;
    for(i=0;i<n;i++){
        cout << h[i] << " ";
    }
    return 0;
}









