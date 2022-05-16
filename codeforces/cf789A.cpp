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
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    ans = a = b = d = 0;
    for(i=0;i<n;i++){
        if(ara[i]>2*k){
            d+=(ara[i]/(2*k));
            ara[i]%=(2*k);
            if(ara[i]!=0) i--;
        }
        else if(ara[i]<=2*k&&ara[i]>k){
            d+=1;
            ara[i]=0;
        }
        else if(ara[i]<=k){
            d+=1;
            ara[i]=0;
            if(i<n-1){
                ara[i+1] -= k;
                if(ara[i+1]<=0){
                    ara[i+1]=0;
                    i++;
                }
            }
        }
    }
    cout << d;
    return 0;
}



























