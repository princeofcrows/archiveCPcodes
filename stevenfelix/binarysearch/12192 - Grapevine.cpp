
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

long long ara[200005];

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

vector < vector <long long> > graph;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, q;
    while(cin >> n >> m){
        if(n==0&&m==0) break;
        graph.clear();
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> temp;
                x.push_back(temp);
            }
            graph.push_back(x);
            x.clear();
        }
        cin >> q;
        while(q--){
            cin >> a >> b;
            mx = 0;
            for(i=0;i<n;i++){
                c = lower_bound(graph[i].begin(), graph[i].end(), a)-graph[i].begin();
                for(j=mx;j<n;j++){
                    if(i+j>=n||c+j>=m||graph[i+j][c+j]>b) break;
                    mx = max(mx, j+1);
                }

            }
            cout << mx << endl;
        }
        cout <<"-"<<endl;
    }
    return 0;
}















