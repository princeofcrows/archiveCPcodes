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

long long ara[1000005], ara2[200005];

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

string st1, st2, st3, st4;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, u, l;
    cin >> n;
    u = l = 0;
    for(i=0;i<n;i++){
        cin >> a >> b;
        ab.push_back({a, b});
        l+=b;
        u+=a;
    }
    if(l%2==0&&u%2==0){
        cout << 0;
        return 0;
    }
    if(l%2==0&&u%2==1||l%2==1&&u%2==0){
        cout << -1;
        return 0;
    }
    if(l%2&&u%2&&n!=1){
        bool f, f1;
        f1 = f = false;
        for(i=0;i<n;i++){
            if(ab[i].first%2==1&&ab[i].second%2==0){
                f = true;
            }
            if(ab[i].first%2==0&&ab[i].second%2==1){
                f = true;
            }
            if(f) break;
        }
        if(f){
            cout << 1;
        }
        else{
            cout <<-1;
        }
    }
    else{
        cout << -1;
    }
    return 0;
}














