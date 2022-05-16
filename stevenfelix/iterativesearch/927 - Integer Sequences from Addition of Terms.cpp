
/////////////////////////////////////////////////////////////////////////
//.....................................................................//
////////////jasper_skywalker___fsociety()___BUET_mashroom////////////////
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

string str, str1, str2;

long long ara[200005];

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
//_________________________naturalprogrmmersdontusetemplets___________________________//
//____________________________________________________________________________________//


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<=n;i++){
            cin >> ara[i];
        }
        cin >> d >> k;
        j = d;
        b = 1;
        a = ara[0];
        temp = 1;
        for(i=1;i<=n;i++){
            a+=ara[i]*temp;
            temp*=b;
        }
        b++;
        temp = b;
        while(j<k){
            a = ara[0];
            for(i=1;i<=n;i++){
                a+=ara[i]*temp;
                temp*=b;
            }
            b++;
            temp = b;
            j = j+(b-1)*d;

        }
        cout << a << endl;

    }
    return 0;
}















