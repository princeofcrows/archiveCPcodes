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

string str, str1, str2, star[200000];

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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str >> str1;
        xy.push_back({str, str1});
    }
    for(i=0;i<n;i++){
        cin >> temp;
        ara[i] = temp-1;
    }
    star[0] = min(xy[ara[0]].first, xy[ara[0]].second);
    for(i=1;i<n;i++){
        str = min(xy[ara[i]].first, xy[ara[i]].second);
        str1 = max(xy[ara[i]].first, xy[ara[i]].second);
        if(str>star[i-1]) star[i] = str;
        else if(str1>star[i-1]) star[i] = str1;
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}




















