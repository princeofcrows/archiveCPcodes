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
    for(i=1;i<=9;i++){
        cin >> ara[i];
    }
    for(i=1;i<=100000;i++){
        ara[1] = i;
        ara[5] = ara[2]+ara[3]-(ara[4]+ara[6])+i;
        ara[9] = ara[2]+ara[3]-(ara[7]+ara[8])+i;
        if(ara[5]>0&&ara[9]>0){
            if(ara[1]+ara[2]+ara[3]==ara[1]+ara[5]+ara[9])
                break;
        }
    }
    for(i=1;i<=9;i++){
        cout << ara[i] <<" ";
        if(i%3==0) cout << endl;
    }
    return 0;
}




















