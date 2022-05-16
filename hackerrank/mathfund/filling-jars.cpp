#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, x, y, s, b;
	cin>>n>>y;
	ans=0;
	while(y--){
        cin >> a >> b >>m;
        ans+=(b-a+1)*m;
	}
	cout << ans/n;
	return 0;
}
