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
char face[105][105];
long long n, m;
bool flag[26];
bool chackF(long long i, long long j){
    if(i==n-1||j==m-1) return false;
    if(face[i][j]!='f'&&face[i][j]!='a'&&face[i][j]!='c'&&face[i][j]!='e')return false;
    if(face[i+1][j]!='f'&&face[i+1][j]!='a'&&face[i+1][j]!='c'&&face[i+1][j]!='e')return false;
    if(face[i][j+1]!='f'&&face[i][j+1]!='a'&&face[i][j+1]!='c'&&face[i][j+1]!='e')return false;
    if(face[i+1][j+1]!='f'&&face[i+1][j+1]!='a'&&face[i+1][j+1]!='c'&&face[i+1][j+1]!='e')return false;
    flag[face[i][j]-'a'] = true;
    flag[face[i+1][j]-'a'] = true;
    flag[face[i][j+1]-'a'] = true;
    flag[face[i+1][j+1]-'a'] = true;
    return (flag[0]&&flag[2]&&flag[4]&&flag[5]);
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> face[i];
    }
    ans = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            memset(flag, false, sizeof flag);
            if(chackF(i, j)) ans++;
        }
    }
    cout << ans;
    return 0;
}











