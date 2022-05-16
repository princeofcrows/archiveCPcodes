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

char stn[2005];

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n;
    cin >> str;
    if(n%2){
        j = n/2;
        k = n/2-1;
        for(i=0;i<n;i++){
            if(i%2==0){
                stn[j] = str[i];
                j++;
            }
            else{
                stn[k] = str[i];
                k--;
            }
        }
        stn[n] = '\0';
        cout << stn;
    }
    else{
        j = n/2-1;
        k = n/2;
        for(i=0;i<n;i++){
            if(i%2==0){
                stn[j] = str[i];
                j--;
            }
            else{
                stn[k] = str[i];
                k++;
            }
        }
        stn[n] = '\0';
        cout << stn;
    }
    return 0;
}





















