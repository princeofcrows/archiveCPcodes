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

long long dp[105][4], n;

long long rest(long long i, long long p){
	if(i==n) return 0;
	if(dp[i][p]!=-1) return dp[i][p];
	long long ans1, ans2, ans3;
	ans1 = ans2 = ans3 = 0;
	if(p!=2 && (ara[i]==2||ara[i]==3)) ans1 = rest(i+1, 2)+1;
	if(p!=1 && (ara[i]==1||ara[i]==3)) ans2 = rest(i+1, 1)+1;
	ans3 = rest(i+1, 0);
	return dp[i][p] =  max(ans1, max(ans2, ans3));
}

int main() {
    //freopen("in.txt", "r", stdin);
    long long int ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d;
    cin >> n;
    for(i=0;i<n;i++){
		cin >> ara[i];
    }
    memset(dp, -1, sizeof dp);
    cout << n-rest(0, 0);
    return 0;
}












