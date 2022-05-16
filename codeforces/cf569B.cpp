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

stack <long long> stk0;
stack <long long> stkm;
vector < vector <long long> > graph(100005);

int main() {
    //freopen("in.txt", "r", stdin);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, l, r, k;
    cin >> n;
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<n;i++){
        cin >> ara[i];
        if(ara[i]>n)continue;
        ara2[ara[i]]++;
        graph[ara[i]].push_back(i);
    }
    for(i=1;i<=n;i++){
        if(ara2[i]==0) stk0.push(i);
        if(ara2[i]>1) stkm.push(i);
    }
    for(i=0;i<n;i++){
        if(ara[i]>n){
            a = stk0.top();
            stk0.pop();
            ara[i] = a;
            ara2[ara[i]]++;
            graph[ara[i]].push_back(i);
        }
    }
    while(!stkm.empty()){
        t = stkm.top();
        stkm.pop();
        temp = ara2[t];
        for(i=0;i<temp-1;i++){
            a = stk0.top();
            stk0.pop();
            ara2[t]--;
            ara2[a]++;
            ara[graph[t][i]] = a;
        }
    }
    for(i=0;i<n;i++){
        cout << ara[i] <<" ";
    }
    return 0;
}




















