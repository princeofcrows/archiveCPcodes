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
	long long int n, m, a, ans, k, j, l, temp, i, s, b;
    cin >> n;
    ans = 0;
    for(i=1;ans<n;i++){
        ans += (i+1)*i/2;
    }
    if(ans==n) cout << i-1;
    else cout << i-2;
	return 0;
}











