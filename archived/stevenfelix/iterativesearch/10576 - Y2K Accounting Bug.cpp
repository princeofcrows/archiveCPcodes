
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

string str, str1, str2, star[100005];

long long ara[200005], ara2[200005], ara3[200005];

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

struct data{
    long long xa, ya, za;
};

vector <data> sol;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    while(cin >> t >> d){
        mx = -99999999999;
        for(b=0;b<(1<<12);b++){
            ans = 0;
            c = 1;
            temp = 0;
            x.push_back(0);
            for(i=0;i<12;i++){
                if(b&(1<<i)){
                    ans+=t;
                    x.push_back(t);
                }
                else{
                    ans-=d;
                    x.push_back(-d);
                }
            }
            for(i=1;i<=12;i++){
                x[i] += x[i-1];
            }
            for(i=5;i<=12;i++){
                if(x[i]-x[i-5]>=0){
                    c = 0;
                    break;
                }
            }
            if(c) mx = max(ans, mx);
            x.clear();
        }
        if(mx<0) cout << "Deficit\n";
        else cout << mx <<"\n";
    }
    return 0;
}















