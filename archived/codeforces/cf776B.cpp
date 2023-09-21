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
long long prime[100005], n, temp;
void seive(){
    memset(prime, 0, sizeof prime);
    temp = 1;
    for(int i=2;i<=n+1;i++){
        if(prime[i]==0){
            temp = 1;
            prime[i] = temp;
            temp = 2;
            for(int j=i*2;j<=n+1; j+=i){
                prime[j] = temp;
            }
        }
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, mn;
    cin >> n;
    seive();
    a = 0;
    for(i=2;i<=n+1;i++){
        a = max(a, prime[i]);
    }
    cout << a << endl;
    for(i=2;i<=n+1;i++){
        cout << prime[i] <<" ";
    }
    return 0;
}











