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
priority_queue <pair <long long, long long>> dm;
priority_queue <pair <long long, long long>> cn;
bool vis[200005];
vector< pair <long long, long long> > tp;
vector< pair <long long, long long> > tp1;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> c >> d;
    for(i=0;i<n;i++){
        cin >> a >> b >> str;
        if(str=="C"){
            if(b<=c){
                cn.push({a, b});
                xy.push_back({b, a});
            }
        }
        if(str=="D"){
            if(b<=d){
                dm.push({a, b});
                ab.push_back({b, a});
            }
        }
    }
    for(i=0;i<1;i++){
        if(!cn.empty()){
            tp.push_back(cn.top());
        }
    }
    for(i=0;i<1;i++){
        if(!dm.empty()){
            tp1.push_back(dm.top());
        }
    }
    ans = 0;
    if(tp1.size()&&tp.size()){
        ans = max(ans, tp[0].first+tp1[0].first);
    }
    if(xy.size())sort(xy.begin(), xy.end());
    if(ab.size())sort(ab.begin(), ab.end());
    if(xy.size())y.push_back(xy[0].second);
    if(xy.size())x.push_back(xy[xy.size()-1].first);
    for(i=1;i<xy.size();i++){
        x.push_back(xy[i].first);
        y.push_back(max(xy[xy.size()-i-1].second, y[i-1]));
    }
    reverse(y.begin(), y.end());
    for(i=0;i<x.size();i++){
        j = lower_bound(x.begin(), x.end(), c-x[i])-x.begin();
        while(j>=x.size()) j--;
        while(j>=0&&x[j]+x[i]>c){
            j--;
        }
        if(j==i){
            j--;
        }
        if(j<0) continue;
        if(x[j]+x[i]<=c) ans = max(ans, y[j]+xy[i].second);
    }
    x.clear();
    y.clear();
    if(ab.size())y.push_back(ab[0].second);
    if(ab.size())x.push_back(ab[ab.size()-1].first);
    for(i=1;i<ab.size();i++){
        x.push_back(ab[i].first);
        y.push_back(max(ab[ab.size()-i-1].second, y[i-1]));
    }
    reverse(y.begin(), y.end());
    for(i=0;i<x.size();i++){
        j = lower_bound(x.begin(), x.end(), d-x[i])-x.begin();
        while(j>=x.size()) j--;
        while(j>=0&&x[j]+x[i]>d){
            j--;
        }
        if(j==i){
            j--;
        }
        if(j<0) continue;
        //cout << i << " "<<j<<endl;
        if(x[j]+x[i]<=d) ans = max(ans, y[j]+ab[i].second);
    }
    cout << ans;
    return 0;
}
