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
double ara[200005], ara2[200005];

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

int main() {
    //freopen("in.txt", "r", stdin);
    double ans, temp, m, h, h2, m2, c, a, b, mx, d, mn, t;
    long long int j, n, i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >>ara[i];
    }
    for(i=0;i<n;i++){
        cin >>ara2[i];
    }
    mx = 1000000000.0;
    mn = 1.0;
    d = 99999999999;
    for(t=mn;t<=mx;t++){
        c = 0;
        for(j=0;j<n;j++){
            a = abs(ara[j]-t)/ara2[j];
            c = max(a, c);
        }
        if(c>d){
            break;
        }
        else{
            d = c;
        }
        //cout << c <<" "<<d <<endl;
        //cout << mx <<" "<<mn<<endl;
    }
    mx = t+3;
    mn = t-3;
    if(mn<1) mn= 1;
    while(abs(mx-mn)>.00000000001){
        c = d = 0;
        for(j=0;j<n;j++){
            a = abs(ara[j]-mx)/ara2[j];
            b = abs(ara[j]-mn)/ara2[j];
            c = max(a, c);
            d = max(b, d);
            //cout << c <<" "<<d <<endl;
        }
        if(c>d){
            mx = mx - (mx-mn)/2;
        }
        else{
            mn = mn + (mx-mn)/2;
        }
        //cout << c <<" "<<d<<endl;
    }
    printf("%.10lf", abs(c+d)/2);
    return 0;
}










