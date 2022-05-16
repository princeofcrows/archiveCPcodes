
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
vector <long long> x;
vector <long long> y;

string str, str1, str2;

long long ara2[1000005], sz[200005];

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

long long ara[200005];
vector < vector <long long> > graph(10006);

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, mn, d, r;
    d = 1;
    cin >> t;
    while(t--){
        cin >> n >> m;
        xy.clear();
        for(i=0;i<n;i++){
            cin >> str;
            a = 0;
            for(j=2;j<str.length();j++){
                a = a*10+(str[j]-'0');
            }
            if(str[0]=='B') xy.push_back({a, 1});
            else xy.push_back({a, 0});
        }
        i = 0;
        if(xy[0].second==1)c = xy[0].first;
        if(xy[0].second==0){
            if(n>1)c = xy[1].first;
            else c = m;
        }
        while(i<n){
            if(xy[i].second==1){
                if(i!=n-1){
                    if(xy[i+1].second==1){
                        c = max(c, xy[i+1].first-xy[i].first);
                    }
                    if(xy[i+1].second==0){
                        if(i!=n-2) c = max(c, xy[i+2].first-xy[i].first);
                        else c = max(c, m-xy[i].first);
                    }
                }
                else{
                    c = max(c, m-xy[i].first);
                }
            }
            if(xy[i].second==0){
                if(i!=n-1){
                    if(xy[i+1].second==1){
                        c = max(c, xy[i+1].first-xy[i].first);
                    }
                    if(xy[i+1].second==0){
                        if(i!=n-2) c = max(c, xy[i+2].first-xy[i].first);
                        else c = max(c, m-xy[i].first);
                    }
                }
                else{
                    c = max(c, m-xy[i].first);
                }
            }
            i++;
        }
        cout << "Case "<<d++<<": "<<c<<endl;
        xy.clear();
    }
    return 0;
}















