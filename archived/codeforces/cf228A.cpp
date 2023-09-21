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

int main(){
    //freopen("in.txt", "r", stdin);
	long long int n, m, a, ans, k,j;
	ans = 4;
	for(int i=0; i<4; i++){
		cin >> n;
        bool flag = true;
		for(j=0;j<xy.size();j++){
            if(xy[j]==n){
                flag = false;
            }
		}
		if(flag) ans--;
		xy.push_back(n);
	}
	cout << ans;
	return 0;
}
