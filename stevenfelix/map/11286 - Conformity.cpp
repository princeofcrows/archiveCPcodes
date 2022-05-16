
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

vector <string> star;
map <vector <long long>, long long> dat;
vector < vector <long long> > graph;
int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    while(cin >> t){
        if(t==0) break;
        mx = 0;
        for(i=0;i<t;i++){
            x.clear();
            for(j=0;j<5;j++){
                cin >> temp;
                x.push_back(temp);
            }
            sort(x.begin(), x.end());
            dat[x]++;
            if(dat[x]==1){
                graph.push_back(x);
            }
            mx = max(dat[x], mx);
        }
        c = 0;
        for(i=0;i<graph.size();i++){
            if(dat[graph[i]]==mx) c++;
        }
        cout << mx*c <<endl;
        dat.clear();
        graph.clear();
    }
    return 0;
}















