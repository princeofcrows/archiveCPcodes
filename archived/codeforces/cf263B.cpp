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

vector <pair <string, string> > xy;
vector <pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

string str, str1, str2, star[200000], str3;

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

int comp(){
    for(int i=0;i<min(x.size(), y.size());i++){
        if(x[i]>y[i]) return 1;
        if(x[i]<y[i]) return 0;
    }
    if(x.size()==y.size()) return 2;
    return (x.size()>y.size());
}


int main() {
    //freopen("in.txt", "r", stdin);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, l, r, k;
    cin >> n;
    a = b = c = 0;
    for(i=0;i<n;i++){
        cin >> temp;
        if(temp>0){
            a+=temp;
            x.push_back(temp);
            c = 1;
        }
        else{
            temp = -temp;
            b+=temp;
            y.push_back(temp);
            c = 2;
        }
    }
    if(a==b){
        if(comp()==0){
            cout << "second";
        }
        else if(comp()==1){
            cout << "first";
        }
        else{
            if(c==1) cout << "first";
            else cout << "second";
        }
    }
    else{
        if(a>b) cout << "first";
        else cout << "second";
    }
    return 0;
}




















