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
string cf = "CODEFORCES";

int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> str;
    n = str.length();
    for(i=0;i<n;i++){
        str1.clear();
        str1.append(str.begin(),str.begin()+i);
        if(str1==cf){
            cout << "YES";
            return 0;
        }
    }
    for(i=n-1;i>=0;i--){
        str1.clear();
        str1.append(str.begin()+i,str.end());
        if(str1==cf){
            cout << "YES";
            return 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            for(k=n-1;k>=j;k--){
                str1.clear();
                str1.append(str.begin(),str.begin()+i);
                str1.append(str.begin()+k,str.end());
                //cout << str1<<endl;
                if(str1==cf){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
























