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
vector <long long> z;

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

long long cnt[1007];
vector <long long> hx;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
        if(ara[i]<0) x.push_back(ara[i]);
        if(ara[i]>0) y.push_back(ara[i]);
        if(ara[i]==0) z.push_back(ara[i]);
    }
    m = 0;
    if(y.size()==0){
        y.push_back(x[0]);
        y.push_back(x[1]);
        m = 2;
    }
    if((x.size()-m)%2==0){
        z.push_back(x[m]);
        m++;
    }
    cout << x.size()-m <<" ";
    for(i=m;i<x.size();i++){
        cout << x[i] << " ";
    }
    cout << endl;
    cout << y.size() <<" ";
    for(i=0;i<y.size();i++){
        cout << y[i] << " ";
    }
    cout << endl;
    cout << z.size() <<" ";
    for(i=0;i<z.size();i++){
        cout << z[i] << " ";
    }
    cout << endl;
    return 0;
}












