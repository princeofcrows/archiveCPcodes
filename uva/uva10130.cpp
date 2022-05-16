#include <map>
#include <set>
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

int p[1005], w[1005], k[1005][35];

int knapsack(int weight, int n){
	if(n==0||weight==0) return 0;
	if(w[n-1]>weight) return knapsack(weight, n-1);
	if(k[n-1][weight]!=-1) return k[n-1][weight];
	return k[n-1][weight] = max(p[n-1]+knapsack(weight-w[n-1], n-1), knapsack(weight, n-1));
}

int main(){
	int t, j, n, i, num, ans, g, G;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0; i<n; i++){
			cin >> p[i] >> w[i];
		}
		cin >> g;
		ans = 0;
		memset(k, -1, sizeof k);
		for(i=0; i<g; i++){
			cin >> G;
			ans+=knapsack(G, n);
		}
		cout << ans <<endl;
	}
	return 0;
}
