
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

long long ara[200005], ara2[200005];

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

long long m, n;

bool bins(long long k){
    for(long long i =0;i<n;i++){
        if(ara2[i]==k){
            k--;
        }
        else if(ara2[i]>k){
            return false;
        }
    }
    return true;
}


int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long ans, temp, j, i, h, h2, m2, c, a, b, mx, k, mn, d, l, md, t;
    cin >> t;
    d = 1;
    while(t--){
        cin >> n;
        ans = 0;
        for(i=0;i<n;i++){
            cin >> ara[i];
        }
        ara2[0] = ara[0];
        for(i=1;i<n;i++){
            ara2[i] = ara[i]-ara[i-1];
        }
        h = 10000000;
        l = 0;
        while(h-l!=1){
            md = (h+l)/2;
            if(bins(md)){
                h = md;
            }
            else{
                l = md;
            }
        }
        cout <<"Case "<<d++<<": "<< h <<endl ;
    }
    return 0;
}















