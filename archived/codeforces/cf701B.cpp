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
    long long int n, temp, t, j, i, h, h2, m2, c, a, b, mx, d, ans, k, m, r;
    cin >> n >> m;
    ans = n*n;
    memset(flagar, true, sizeof flagar);
    memset(flagar2, true, sizeof flagar2);
    c = r = 0;
    for(i=0;i<m;i++){
    	cin >> a >> b;
    	bool f1, f2;
    	f1 = f2 = false;
    	if(flagar[a]==true){
    		flagar[a] = false;
    		ans-=n;
    		ans+=r;
    		f1 = true;
		}
		if(flagar2[b]==true){
    		flagar2[b] = false;
    		ans-=n;
    		ans+=c;
    		f2 = true;
		}
		if(f1&&f2)ans+=1;
		if(f1) c++;
		if(f2) r++;
		if(ans<0) ans = 0;
		cout << ans << " ";
	}
    return 0;
}












