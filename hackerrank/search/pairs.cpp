#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int temp[100005], num[100005];

void mergesort(int lo, int hi){
	if(lo==hi) return;
	int mid = (lo+hi)/2;
	mergesort(lo, mid);
	mergesort(mid+1, hi);
	
	int i, j, k;
	for(i = lo, j = mid+1, k = lo; k<=hi; k++){
		if(i == mid+1) temp[k] = num[j++];
		else if(j == hi+1)	temp[k] = num[i++];
		else if(num[i]<num[j]) temp[k] = num[i++];
		else temp[k] = num[j++];
	}
	for(i = lo; i<=hi; i++) num[i] = temp[i];
}

int main(){
	int n, k, ans;
	cin >> n >> k;
	for(int i = 0; i<n; i++){
		cin >> num[i];
	}
	mergesort(0, n-1);
	ans = 0;
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; num[j]-num[i]<=k&&j<n; j++){
			if(num[j]-num[i]==k) ans++;
		}
	}
	cout << ans;
	return 0;
}
