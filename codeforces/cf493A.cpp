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

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000], str3;

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
long long home[105], away[105];


int main() {
    //freopen("in.txt", "r", stdin);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, l, r, k;
    cin >> str >> str1;
    memset(home, 0, sizeof home);
    memset(away, 0, sizeof away);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> str2 >> b >> str3;
        if(str2=="h"){
            if(str3=="y") home[b]++;
            else home[b]+=2;
            if(home[b]>=2){
                cout << str << " " <<b <<" "<<a<<endl;
                home[b] = -999999999999999;
            }
        }
        else{
            if(str3=="y") away[b]++;
            else away[b]+=2;
            if(away[b]>=2){
                cout << str1 << " " <<b <<" "<<a<<endl;
                away[b] = -999999999999999;
            }
        }
    }
    return 0;
}




















