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

string str, str1, str2, star[200000], str3;

long long ara[1000005], ara2[1000005];

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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, s;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> temp;
        x.push_back(temp);
    }
    if(m==0){
        cout << "YES";
        return 0;
    }
    sort(x.begin(), x.end());
    if(x[0]==1){
        cout << "NO";
        return 0;
    }
    c = 0;
    for(i=0;i<m-1;i++){
        if(x[i+1]-x[i]==1){
            c++;
        }
        else{
            c = 0;
        }
        if(c==2){
            cout << "NO";
            return 0;
        }
    }
    if(x[m-1]==n){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}




















