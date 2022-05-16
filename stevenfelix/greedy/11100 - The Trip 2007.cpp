
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
    while(cin >> n){
        if(n==0) break;
        memset(ara2, 0, sizeof ara2);
        c = 0;
        for(i=0;i<n;i++){
            cin >> ara[i];
            if(ara2[ara[i]]==0) x.push_back(ara[i]);
            ara2[ara[i]]++;
            c = max(c, ara2[ara[i]]);
        }
        sort(x.rbegin(), x.rend());
        t = 0;
        for(i=0;i<x.size();i++){
            for(j=0;j<ara2[x[i]];j++){
                if(t==c) t = 0;
                graph[t].push_back(x[i]);
                t++;
            }
        }
        cout << c << endl;
        for(i=0;i<c;i++){
            for(j=0;j<graph[i].size();j++){
                cout << graph[i][j];
                if(j!=graph[i].size()-1) cout << " ";
            }
            cout << endl;
        }
        vector < vector <long long> > tgraph(10006);
        swap(tgraph, graph);
        x.clear();
    }
    return 0;
}















