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

long long pos[1005], neg[1005], neg1[1005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> str >> str1;
    a = (str[0]-'0')*10+(str[1]-'0');
    b = (str[3]-'0')*10+(str[4]-'0');
    c = (str1[0]-'0')*10+(str1[1]-'0');
    d = (str1[3]-'0')*10+(str1[4]-'0');
    i = a-c;
    //cout << a <<" "<<b<<" " << c<<" " <<d<<endl;
    if(i<0) i+=24;
    j = b-d;
    if(j<0){
        j+=60;
        i--;
        if(i<0) i+=24;
    }
    if(i<10)cout <<0;
    cout<<i<<":";
    if(j<10)cout <<0;
    cout<<j;
    return 0;
}






















