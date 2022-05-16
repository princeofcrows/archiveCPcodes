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

long long ara[200005], ara2[1000005];

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
vector < vector <long long> > graph(1000005);

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    memset(ara2, 0, sizeof ara2);
    for(i=0;i<n;i++){
        cin >> ara[i];
        graph[ara[i]].push_back(i+1);
        ara2[ara[i]]++;
    }
    mx = 0;
    for(i=0;i<1000001;i++){
        if(ara2[i]>mx){
            mx = ara2[i];
        }
    }
    b = 99999999999999;
    a = 0;
    for(i=0;i<n;i++){
        if(ara2[ara[i]]==mx){
            if(graph[ara[i]][graph[ara[i]].size()-1]-graph[ara[i]][0]<b-a){
                b = graph[ara[i]][graph[ara[i]].size()-1];
                a = graph[ara[i]][0];
            }
        }
    }
    cout << a <<" "<<b;
    return 0;
}















