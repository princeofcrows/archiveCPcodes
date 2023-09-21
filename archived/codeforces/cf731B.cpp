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

string str, str1, str2, star[2000], str3;

long long ara[1000005], ara2[200005];

bool flagar[200005], flagar2[200005];

bool compare(pair <long long, long long> i, pair <long long, long long> j){
    return (i.first<j.first);
}

bool compare2(pair <long long, long long> i, pair <long long, long long> j){
    return (i.second<j.second);
}

long long gcd(long long a, long long b){
    if(a%b==0) return b;
    return gcd(b, a%b);
}

//____________________________________________________________________________________//
//____________________________________________________________________________________//
//____________________________________________________________________________________//

long long grid[3][3];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    ara2[0]=ara[0]%2;
    b = ara[0]%2;
    for(i=1;i<n;i++){
        if(ara2[i-1]==0){
            ara2[i]=ara[i]%2;
            b = ara[i]%2;
        }
        else{
            if(b==1){
                if(ara[i]==0) break;
                ara2[i] = 1;
                b = ara[i]%2;
                if(b==1) b=0;
                else b=1;
            }
            else{
                ara2[i]=ara[i]%2;
                b = ara[i]%2;
            }
        }
    }
    if(b) cout <<"NO";
    else cout <<"YES";
    return 0;
}























