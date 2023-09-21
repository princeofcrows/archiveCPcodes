
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
vector <double> x;
vector <long long> y;

string str, str1, str2, star[100005];

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


void perm(long long n, long long i){
    if(x.size()==6){
        for(int j=0;j<6;j++){
            cout << x[j];
            if(j!=5) cout << " ";
        }
        cout << endl;
        return;
    }
    else if(i>=n) return;
    else{
        long long  j = i;
        x.push_back(ara[j]);
        perm(n, j+1);
        x.pop_back();
        perm(n, j+1);
    }

}

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, d;
    c = 1;
    while(cin >> n){
        if(n==0) break;
        if(c==0) cout << endl;
        for(i=0;i<n;i++){
            cin >> ara[i];
            //cout << ara[i] << " ";
        }
        perm(n, 0);
        x.clear();
        c = 0;
    }
    return 0;
}















