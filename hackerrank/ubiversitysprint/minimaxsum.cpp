#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <cmath>
#include <string>
#include <map>
#include <list>
#include <queue>
#include <utility>
#include <cstdio>

using namespace std;

int main(){
	long long int caseno, t = 1, a, b, n, ta, tb, ans, min, max;
	ans = 0;
	min = 1000000009;
	max = 0;
	for(int i=0; i<5; i++){
		cin >> a;
		if(a>max){
			max = a;
		}
		if(a<min){
			min = a;
		}
		ans+=a;
	}
	cout << ans-max << " " << ans-min;
	return 0;
}
