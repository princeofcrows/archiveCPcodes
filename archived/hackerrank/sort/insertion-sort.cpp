#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
vector <int>  ar;
int s;
unsigned long long int ans2;

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

int main(void) {
   int _ar_size, t;
   cin >> t;
   while(t--){
   		cin >> s;
	    for(int _ar_i=0; _ar_i<s; _ar_i++) {
	        int _ar_tmp;
	        cin >> _ar_tmp;
	        num[_ar_i] = _ar_tmp;
	        a[_ar_i] = _ar_tmp;
	    }
		mergesort(0, s-1);
		ans2 = 0;
		for(int i=0; i<s; i++) {
	        if(num[i]!=a[i]){
	        	ans2+=+1;
			}
	    }
		cout << ans2 << endl;
   }
	return 0;
}
