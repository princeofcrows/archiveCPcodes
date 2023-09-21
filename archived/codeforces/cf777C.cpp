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

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n >> m;
    long long ant[n+5][m+5];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> ant[i][j];
        }
    }
    for(i=0;i<m;i++){
        bool flag2 = false;
        for(j=0;j<n-1;j++){
            if(ant[j][i]<=ant[j+1][i]){
                if(flag2==false) a = j;
                flag2  =true;
            }
            else if(flag2==true){
                flag2 = false;
                ab.push_back({a, j-1});
            }
        }
        if(flag2==true){
            ab.push_back({a, j+1});
        }
    }
    cin >> d;
    for(i=0;i<d;i++){
        cin >> a >> b;
        if(n==1){
            cout << "Yes";
            continue;
        }
        bool flag = true;
        for(j=0;j<ab.size();j++){
            if((ab[j].first<=(a-1)&&ab[j].second>=(b-1))){
                cout << "Yes" << endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "No" << endl;
        }
    }
    return 0;
}












