#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
vector < long long > xy;
vector < pair <long long, long long> > pxy;
string str;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, s, b, t, c, d ,e;
    cin >> a >> b >> c >> d >> e;
    if((a+b+c+d+e)%5||(a+b+c+d+e)==0) cout <<-1;
    else cout << (a+b+c+d+e)/5;
	return 0;
}











