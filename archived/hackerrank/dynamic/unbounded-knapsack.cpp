#include <bits/stdc++.h>

using namespace std;
int ara[2000];

int knapsack(int k, int n){
	if(n<0) return 0;
	int temp1 = 0;
	int temp2;
	if(ara[n]<=k)	temp1 = ara[n]+knapsack(k-ara[n], n);
	temp2 = knapsack(k, n-1);
	if(temp1>temp2){
		return temp1;
	}
	else{
		return temp2;
	}
}

int main(){
	//freopen("in.txt", "r", stdin);
	int t, j, n, i, num, ans, g, k, G;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(i=0; i<n; i++){
			cin >> ara[i];
		}
		cout << knapsack(k, n-1)<<endl;
	}
	return 0;
}
