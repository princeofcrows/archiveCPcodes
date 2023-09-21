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

long long ara[1000005], ara2[200005];

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

string st1, st2, st3, st4;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> str >> str1;
    n = str.length();
    m = str1.length();
    a = b =  0;
    for(i=0;i<n;i++){
        a += (str[i]-'0');
        a*=10;
    }
    for(i=0;i<m;i++){
        b += (str1[i]-'0');
        b*=10;
    }
    a/=10;
    b/=10;
    c = a+b;
    while(c>0){
        if(c%10!=0)st1+=(c%10+'0');
        c/=10;
    }
    reverse(st1.begin(), st1.end());
    a = b = c = 0;
    for(i=0;i<n;i++){
        if(str[i]!='0'){
            a += (str[i]-'0');
            a*=10;
        }
    }
    for(i=0;i<m;i++){
        if(str1[i]!='0'){
            b += (str1[i]-'0');
            b*=10;
        }
    }
    a/=10;
    b/=10;
    //cout << a << endl << b <<endl;
    c = a+b;
    while(c>0){
        st2+=(c%10+'0');
        c/=10;
    }
    reverse(st2.begin(), st2.end());
    //cout << str << endl << str1 << endl << st1 << endl <<st2 <<endl;
    if(st2==st1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}














