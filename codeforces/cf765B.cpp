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

long long dp[1005][1005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin>> str;
    n = str.length();
    bool flag[26];
    int sor[26];
    memset(flag, false, sizeof flag);
    m = 0;
    for(t=0;t<n;t++){
        if(flag[str[t]-'a']==false){
            sor[str[t]-'a'] = t;
            m++;
        }
        flag[str[t]-'a'] = true;
    }
    bool idf = false;
    for(t=0;t<26;t++){
        if(idf==false&&flag[t]==false){
            idf = true;
        }
        else if(idf==true&&flag[t]==true){
            cout << "NO";
            return 0;
        }
    }
    for(t=0;t<m-1;t++){
        //cout << sor[t] <<endl;
        if(sor[t]>sor[t+1]){
            cout << "NO";
            return 0;
        }
    }
    cout <<"YES";
    return 0;
}









