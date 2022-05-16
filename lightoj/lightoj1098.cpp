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
	long long int caseno, t = 1, a, b, n, ta, tb, ans;
	cin >> caseno;
	while(caseno--){
		cin >> n;
		ans = 0;
		for(int i=2; i*i<=n; i++){
			ans+=((n)/i-i)*i + ((n/i)+1)*(n/i)/2 - (i-1)*(i)/2;
		}
		cout << "Case " << t <<": "<< ans <<"\n";
		t++;
	}
	return 0;
}
