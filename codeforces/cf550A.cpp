
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

string str, str1, str2;

long long ara[200005];

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
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> str;
    n = str.length();
    bool flag[n+5];
    a = 0;
    b = 0;
    memset(flag, false, sizeof flag);
    for(i=0; i<n-1; i++){
        if(str[i]=='A'&&str[i+1]=='B'){
            a++;
            flag[i] = true;
            flag[i+1] = true;
        }
    }
    if(a==0){
        cout <<"NO";
        return 0;
    }
    for(i=0; i<n-1; i++){
        if(str[i]=='B'&&str[i+1]=='A'){
            if((flag[i]&&flag[i+1])&&a>2){
                cout<<"YES";
                return 0;
            }
            if((flag[i]||flag[i+1])&&!(flag[i]&&flag[i+1])&&a>1){
                cout<<"YES";
                return 0;
            }
            if(!flag[i]&&!flag[i+1]&&a>=1){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout <<"NO";
    return 0;
}















