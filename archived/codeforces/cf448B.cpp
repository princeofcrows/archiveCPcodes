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
long long A[28], B[28], C[6];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, ax ,bx, by, ay, cx, cy;
    cin >> str >> str1;
    memset(A, 0, sizeof A);
    memset(B, 0, sizeof B);
    for(i=0;i<str.length();i++){
        A[str[i]-'a']++;
    }
    for(i=0;i<str1.length();i++){
        B[str1[i]-'a']++;
    }
    a = b = c = 0;
    for(i=0;i<26;i++){
        if(A[i]<B[i]){
            cout << "need tree";
            return 0;
        }
        if(A[i]!=B[i]) c = 1;
    }
    j = 0;
    for(i=0;i<str.length();i++){
        if(str[i]==str1[j]) j++;
        if(j==str1.length()){
            b = 1;
            break;
        }
    }
    if(b&&c==1) cout << "automaton";
    else if(b==0&&c) cout << "both";
    else cout << "array";
    return 0;
}



















