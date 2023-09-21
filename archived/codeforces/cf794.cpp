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

string str, str1, str2, star[2000], str3;

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
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, p, q, x, y;
    cin >> str >> str;
    str = sort(str.begin(), str.end());
    str1 = sort(str1.begin(), str1.end());
    str1 = reverse(str1.begin(), str1.end());
    n = str.length();
    a = n/2;
    b = n/2;
    if(n%2) a++;
    i = j = 0;
    c = 0;
    while(c!=n){
        if(c%2==0){
            if(str[i]>str1[b]){
                str2+=str[i];
                i++;
            }
            else{
                str3+=str[i];
                i++;
            }
        }
        else{
            if(str1[j]<str[a]){
                str2+=str1[j];
                j++;
            }
            else{
                str3+=str1[j];
                j++;
            }
        }
        c++;
    }
    str2 = reverse(str2.begin(), str2.end());
    cout << str1 << str2;
    return 0;
}











