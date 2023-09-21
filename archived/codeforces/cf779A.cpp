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
vector <long long> x1;
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
long long A[6], B[6], C[6];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ax ,bx, by, ay, cx, cy;
    cin >> n;
    for(i=0;i<6;i++){
        A[i] = 0;
        B[i] = 0;
    }
    for(i=0;i<n;i++){
        cin >> a;
        A[a]++;
    }
    for(i=0;i<n;i++){
        cin >> a;
        B[a]++;
    }
    a = b = 0;
    for(i=0;i<6;i++){
        C[i] = A[i]-B[i];
        if((A[i]+B[i])%2){
            cout << -1;
            return 0;
        }
        if(C[i]<0)a-=C[i];
        if(C[i]>0)b+=C[i];
    }
    if(a!=b||a%2){
        cout << -1;
        return 0;
    }
    cout << a/2;
    return 0;
}










