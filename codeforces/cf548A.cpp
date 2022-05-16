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
    if(i.first==j.first) return(i.second<j.second);
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

char cho[105][105];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, cnt;
    cin >> str;
    cin >> k;
    n = str.length();
    if((n%k)){
        cout << "NO";
        return 0;
    }
    cnt = 1;
    a = k;
    k = n/k;
    i = cnt*k-k;;
    j = cnt*k-1;
    while(cnt<=n/k){
        while(i<=j){
            if(str[i]!=str[j]){
                cout << "NO";
                return 0;
            }
            i++;
            j--;
        }
        cnt++;
        i = cnt*k-k;;
        j = cnt*k-1;
    }

    cout << "YES";
    return 0;
}















