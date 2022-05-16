
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
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
vector <double> x;
vector <long long> y;

string str, str1, str2, star[100005];

double ara[200005], ara2[200005];

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
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//

double as, tp;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    c = 1;
    while(cin >> n){
        for(i=0;i<n;i++){
            cin >> star[i];
            for(j=0;j<n;j++){
                if(star[i][j]=='3') ab.push_back({i, j});
                if(star[i][j]=='1') xy.push_back({i, j});
            }
        }
        ans = 0;
        for(i=0;i<xy.size();i++){
            temp = 999999999999999;
            for(j=0;j<ab.size();j++){
                temp = min(temp, abs(xy[i].first-ab[j].first)+abs(xy[i].second-ab[j].second));
            }
            ans = max(ans, temp);
        }
        cout << ans <<endl;
        ab.clear(); xy.clear();
    }
    return 0;
}















