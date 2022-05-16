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

string str, str1, str2, star[2000], str3;

long long ara[1000005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.second<j.second);
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
    cin >> a >> b;
    c = 1;
    t = 0;
    while(t<=63){
        x.push_back(c);
        c*=2;
        t++;
    }
    ans = 0;
    reverse(x.begin(), x.end());
    for(i=0;i<x.size();i++){
        c = x[i];
        for(j=i+2;j<x.size();j++){
            d = -x[j]-1+c;
            if(d>=a&&d<=b&&d!=1){
                if(y.empty()){
                    y.push_back(d);
                    ans++;
                    continue;
                }
                k = lower_bound(y.begin(), y.end(), d)-y.begin();
                if(y[k]==d) continue;
                y.push_back(d);
                ans++;
                 //cout << d <<" " <<c<<" "<<x[j]-1<<endl;
            }
        }
    }

    cout << ans;
    return 0;
}























