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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    vector < pair <long long, string> > dat;
    vector < vector <pair <long long, long long> > > inf(1005);
    ans = -10294;
    for(i=0;i<n;i++){
        cin >> str >> a;
        bool flag = false;
        for(j=0;j<dat.size();j++){
            if(dat[j].second==str){
                flag = true;
                dat[j].first+=a;
                inf[j].push_back({i, dat[j].first});
            }
        }
        if(!flag){
            dat.push_back({a, str});
            inf[dat.size()-1].push_back({i, a});
        }
    }
    ans = 0;
    str = "";
    j = 0;
    for(i=0;i<dat.size();i++){
        if(dat[i].first>ans){
            ans = dat[i].first;
            str = dat[i].second;
            for(a=0;a<inf[i].size();a++){
                if(ans<=inf[i][a].second){
                    j = inf[i][a].first;
                    break;
                }
            }
        }
        else if(dat[i].first==ans){
            for(a=0;a<inf[i].size();a++){
                if(inf[i][a].second>=ans&&inf[i][a].first<j){
                    ans = dat[i].first;
                    str = dat[i].second;
                    j = inf[i][a].first;
                    break;
                }
            }
        }
        //cout << dat[i].second << " " << dat[i].first << " "  << endl;
    }
    cout << str;
    return 0;
}












