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
    long long int a[100005], ans, tem;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> num[i];
    mergesort(0, n-1);
    ans = 1;
    tem = n;
    cout << n << endl;
	for(int i=0; i<tem-1; i++){
		if(num[i]==num[i+1]) ans++;
		else{		
			n -= ans;
			ans = 1;
			cout << n <<endl;
		}
	}
    return 0;
}

