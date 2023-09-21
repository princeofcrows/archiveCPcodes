#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int temp[200005], num[200005], a[200005];

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

int main() {
    long long int a[100005], ans;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> num[i];
    mergesort(0, n-1);
    ans = abs(num[0]-num[1]);
    a[0] = num[0];
    a[1] = num[1];
    int j = 0;
    for(int i =1; i<n-1; i++){
    	if(abs(num[i]-num[i+1])<ans){
    		a[0] = num[i];
    		a[1] = num[i+1];
    		ans = abs(num[i]-num[i+1]);
    		j = 1;
		}
		else if(abs(num[i]-num[i+1])==ans){
			j++;
			a[j] = num[i];
			j++;
    		a[j] = num[i+1];
		}
	}
	
	for(int i=0; i<=j; i++){
		cout << a[i] <<" ";
	}
    return 0;
}

