#include <queue>
#include <iostream>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;
double num[100005], temp[100005];

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
	double n, n1, n2, temp, ans1, ans2, ans;
	int i;
	cin >> n >> n1 >> n2;
	for(i = 0; i<(int)n; i++){
		cin >> num[i];
	}
	mergesort(0, n-1);
	if(n2<n1){
		temp = n2;
		n2 = n1;
		n1 = temp;
	}
	ans1 = ans2 = 0;
	for(i = n-1; i>=(int)(n-n1); i--){
		ans1+=num[i];
	}
	for(i = i; i>=(int)(n-n1-n2); i--){
		ans2+=num[i];
	}
	ans = ans1/n1+ans2/n2;
	printf("%.7lf\n", ans);
	return 0;
}
