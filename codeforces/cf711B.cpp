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

long long grid[505][505], col[505], row[505];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d1, r, d2, res;
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> grid[i][j];
            if(grid[i][j]==0){
                a = i;
                b = j;
            }
        }
    }
    for(i=0;i<n;i++){
        ans = 0;
        for(j=0;j<n;j++){
            ans+=grid[i][j];
        }
        row[i] = ans;
    }
    ans = 0;
    for(i=0;i<n;i++){
        if(i==a) continue;
        ans^=row[i];
        r = row[i];
    }
    if(ans!=0&&ans!=r){
        cout << -1;
        return 0;
    }

    for(i=0;i<n;i++){
        ans = 0;
        for(j=0;j<n;j++){
            ans+=grid[j][i];
        }
        col[i] = ans;
    }
    ans = 0;
    for(i=0;i<n;i++){
        if(i==b) continue;
        ans^=col[i];
        c = col[i];
    }

    if(ans!=0&&ans!=c){
        cout << -1;
        return 0;
    }

    if(r!=c){
        cout << -1;
        return 0;
    }

    if(row[a]!=col[b]){
        cout << -1;
        return 0;
    }
    res = r - row[a];
    grid[a][b] = res;
    ans = 0;
    for(i=0;i<n;i++){
        ans+=grid[i][i];
    }
    if(ans!=r){
        cout << -1;
        return 0;
    }
    ans = 0;
    for(i=0;i<n;i++){
        ans+=grid[i][n-i-1];
    }
    if(ans!=r){
        cout << -1;
        return 0;
    }
    if(res<=0){
        cout << -1;
        return 0;
    }
    cout << res;
    return 0;
}














