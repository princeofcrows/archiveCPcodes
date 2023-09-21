
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

vector < vector < pair <long long, long long> > > graph(10005);
bool vis[100];



int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(cin >> m >> n){
        for(i=1;i<=m;i++){
            cin >> temp;
            for(j=0;j<temp;j++) cin >> ara[j];
            for(j=0;j<temp;j++){
                cin >> a;
                graph[ara[j]].push_back({a, i});
            }
        }
        cout << n <<" "<<m<<endl;
        for(i=1;i<=n;i++){
            temp = graph[i].size();
            cout << temp ;
            if(temp) cout << " ";
            for(j=0;j<temp;j++){
                cout << graph[i][j].second;
                if(j!=temp-1) cout <<" ";
            }
            cout <<endl;
            for(j=0;j<temp;j++){
                cout << graph[i][j].first;
                if(j!=temp-1) cout <<" ";
            }
            cout << endl;
        }
        vector < vector < pair <long long, long long> > > tempgraph(10005);
        swap(tempgraph, graph);
        //cout << endl;
    }
    return 0;
}















