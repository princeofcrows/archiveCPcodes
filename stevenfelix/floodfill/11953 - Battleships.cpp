////////////////////////////////////////////////////////////////////////
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

map <long long, long long> dat;
bool vis[500][500];
long long reg, n, m;

void floodfill(long long i, long long j){
    if(star[i][j]=='.') return;
    if(vis[i][j]) return;
    vis[i][j] = true;
    if(i+1<n)floodfill(i+1, j);
    if(j+1<n)floodfill(i, j+1);
    if(i-1>=0)floodfill(i-1, j);
    if(j-1>=0)floodfill(i, j-1);
}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long ans, temp, t, j, i, h, h2, m2, c, a, b, mx, d, k;
    cin >> t;
    d = 1;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++){
            cin >> star[i];
        }
        memset(vis, false, sizeof vis);
        ans = 0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(!vis[i][j]&&star[i][j]=='x'){
                    floodfill(i, j);
                    ans++;
                }
            }
        }
        cout << "Case "<<d++<<": " <<ans << endl;
    }
    return 0;
}











