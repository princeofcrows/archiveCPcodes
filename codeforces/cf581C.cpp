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

string str, str1, str2, star[200000], str3;

long long ara[1000005], ara2[1000005];

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
map <long long, long long> home;
map <long long, long long> away;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> k;
    ans = 0;
    h = n;
    j = 0;
    for(i=0;i<n;i++){
        cin >> temp;
        if(temp==100){
            h--;
            ans+=(temp/10);
            continue;
        }
        xy.push_back({temp%10, j++});
        y.push_back(temp);
        ans+=(temp/10);
    }
    sort(xy.begin(), xy.end());
    n = h;
    i=n-1;
    while(i>=0){
        if(10-xy[i].first<=k){
            k-= 10-xy[i].first;
            ans++;
            y[xy[i].second]+=10-xy[i].first;
            xy[i].first = 0;
        }
        else{
            k=0;
            break;
        }
        i--;
    }
    sort(y.begin(), y.end());
    if(k!=0){
        i=n-1;
        while(i>=0){
            if(100-y[i]<=k){
                k-=100-y[i];
                ans+=(100-y[i])/10;
                y[i] = 100;
            }
            else{
                y[i] += k;
                ans+=(k/10);
                k=0;
                break;
            }
            i--;
        }
    }
    cout << ans;
    return 0;
}




















