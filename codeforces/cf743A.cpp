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
    cin >> n >> a >> b;
    cin >> str;
    temp = max(a, b);
    a = min(a, b);
    b = temp;
    if(str[a-1]==str[b-1]){
        //cout <<" bitch";
        cout << 0;
        return 0;
    }
    i = b-1;
    while(str[i]==str[b-1]) i--;
    b = i+2;
    i = a-1;
    while(str[i]==str[a-1]) i++;
    a = i;
    mx = 9999999999999;
    temp = 999999999999;
    for(i=b;i<n;i++){
        if(str[i]==str[a-1]){
            temp = abs(i-b+1);
            break;
        }
    }
    mx = min(mx, temp);
    for(i=b-2;i>=0;i--){
        if(str[i]==str[a-1]){
            temp = abs(i-b+1);
            break;
        }
    }
    mx = min(mx, temp);
    for(i=a;i<n;i++){
        if(str[i]==str[b-1]){
            temp = abs(i-a+1);
            break;
        }
    }
    mx = min(mx, temp);
    for(i=a-2;i>=0;i--){
        if(str[i]==str[b-1]){
            temp = abs(i-a+1);
            break;
        }
    }
    mx = min(mx, temp);
    cout << mx;
    return 0;
}











