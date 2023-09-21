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

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, e;
    cin >> str;
    n = str.length();
    long long bulb[7];
    memset(bulb, 0, sizeof bulb);
    for(i=0;i<n;i++){
        if(str[i]=='B'){
            bulb[0]++;
        }
        if(str[i]=='u'){
            bulb[1]++;
        }
        if(str[i]=='l'){
            bulb[2]++;
        }
        if(str[i]=='b'){
            bulb[3]++;
        }
        if(str[i]=='a'){
            bulb[4]++;
        }
        if(str[i]=='s'){
            bulb[5]++;
        }
        if(str[i]=='r'){
            bulb[6]++;
        }
    }
    bulb[1]/=2;
    bulb[4]/=2;
    mx = 999999999999999;
    for(i=0;i<7;i++){
        if(bulb[i]<mx) mx = bulb[i];
    }
    cout << mx;
    return 0;
}















