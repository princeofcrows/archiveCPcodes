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
string str;
string str2, str3;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k, j, l, temp, i, b;
    cin >> n >> m >> a >> b;
    i = (n/m+1)*b;
    j = n*a;
    k = (n/m)*b + (n%m)*a;
    cout << min(i, min(j, k));
	return 0;
}











