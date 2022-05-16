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
vector <long long> x1;
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
long long A[28], B[28], C[6];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ara[i];
        ara2[i] = 0;
    }
    bool flag = false;
    i = 0;
    while(!flag){
        flag = true;
        for(i=i;i<n;i++){
            if(ara[i]!=ara2[i]){
                if(i==n-1){
                    cout << "PL";
                    ara2[i]++;
                    flag = false;
                    continue;
                }
                cout << "PR";
                flag = false;
                ara2[i]++;
            }
            else if(i==n-1){
                cout << "L";
                continue;
            }
            else{
                cout << "R";
            }
        }
        i=n-2;
        for(i=i;i>=0;i--){
            if(ara[i]!=ara2[i]){
                if(i==0){
                    cout << "PR";
                    ara2[i]++;
                    flag = false;
                    continue;
                }
                cout << "PL";
                flag = false;
                ara2[i]++;
            }
            else if (i==0){
                cout << "R";
                continue;
            }
            else{
                cout << "L";
            }
        }
        i=1;
    }
    return 0;
}



















