
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

vector < vector <long long> > graph(100);
bool vis[100];

void floodfill(long long u){
    if(vis[u]) return;
    vis[u] = true;
    for(int i=0;i< graph[u].size();i++){
        floodfill(graph[u][i]);
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k;
    cin >> t;
    getchar();
    while(t--){
        while(1){
            getline(cin, str);
            if(str[0]=='*'){
                getline(cin, str);
                memset(vis, false, sizeof vis);
                a = b = 0;
                for(i=0;i<str.length();i++){
                    if(str[i]!=','){
                        if(!vis[str[i]-'A']){
                            if(graph[str[i]-'A'].size()==0) b++;
                            else a++;
                            floodfill(str[i]-'A');
                        }
                    }
                }
                cout <<"There are "<<a<<" tree(s) and "<<b<<" acorn(s).\n";
                for(i=0;i<100;i++) graph[i].clear();
                break;
            }
            graph[str[1]-'A'].push_back(str[3]-'A');
            graph[str[3]-'A'].push_back(str[1]-'A');
        }
    }
    return 0;
}















