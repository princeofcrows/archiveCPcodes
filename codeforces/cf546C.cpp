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

queue <long long> f;
queue <long long> fs;
queue <long long> s;
queue <long long> ss;

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k1, k2;
    cin >> n;
    cin >> k1;
    for(i=0;i<k1;i++){
        cin >> temp;
        f.push(temp);
        fs.push(temp);
    }
    cin >> k2;
    for(i=0;i<k2;i++){
        cin >> temp;
        s.push(temp);
        ss.push(temp);
    }
    bool flag = true;
    ans = 0;
    while(!f.empty()&&!s.empty()){
        if(ans>99999999) break;
        a = f.front();
        f.pop();
        b = s.front();
        s.pop();
        if(a>b){
            f.push(b);
            f.push(a);
        }
        else{
            s.push(a);
            s.push(b);
        }
        ans++;
    }
    if(f.empty()){
        cout << ans << " "<< 2;
    }
    else if(s.empty()){
        cout << ans << " "<< 1;
    }
    else{
        cout << -1;
    }
    return 0;
}













