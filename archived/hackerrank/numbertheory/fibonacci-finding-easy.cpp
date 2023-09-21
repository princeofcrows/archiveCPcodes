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

long long mod, f1, f2;

struct matrix{
    long long int val[2][2];
};

matrix multmat(matrix F, matrix M){
    long long a = (F.val[0][0]%mod)*(M.val[0][0]%mod) + (F.val[0][1]%mod)*(M.val[1][0]%mod);
    long long b = (F.val[0][0]%mod)*(M.val[0][1]%mod) + (F.val[0][1]%mod)*(M.val[1][1]%mod);
    long long c = (F.val[1][0]%mod)*(M.val[0][0]%mod) + (F.val[1][1]%mod)*(M.val[1][0]%mod);
    long long d = (F.val[1][0]%mod)*(M.val[0][1]%mod) + (F.val[1][1]%mod)*(M.val[1][1]%mod);
    matrix res;
    res.val[0][0] = a%mod;
    res.val[0][1] = b%mod;
    res.val[1][0] = c%mod;
    res.val[1][1] = d%mod;
    return res;
}

matrix powmat(matrix A, long long p){
    if(p==1) return A;
    if(p%2==1) return multmat(A, powmat(A, p-1));
    matrix B = powmat(A, p/2);
    return multmat(B, B);
}

long long fibo(long long n){
    if(n==0) return f1;
    if(n==1) return f2;
    matrix M;
    M.val[0][0] = M.val[0][1] = M.val[1][0] = 1;
    M.val[1][1] = 0;
    matrix res2 = powmat(M, n-1);
    return (res2.val[0][0]%mod)*(f2%mod) + (res2.val[0][1]%mod)*(f1%mod);
}


int main() {
    //freopen("in.txt", "r", stdin);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, q;
    cin >> q;
    mod  = 1000000007;
    while(q--){
        cin >> f1 >> f2 >> n;
        ans = fibo(n);
        cout << ans%mod << endl;
    }
    return 0;
}














