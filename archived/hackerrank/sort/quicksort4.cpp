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
int s, ans1, ans2;

void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
	ans2=0;
    for(i=0;i<N;i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            value=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=value;
            j--;
            ans2++;
        }
    }
}

void quicksort(int j, int n) {
	if(j>=n-1) return;
	if(j==-1) return;
	int a = ar[n-1];
	int temp, k, gmark;
	gmark = n-1;
	for(int i=j; i<n-1; i++){
		if(ar[i]<a&&gmark!=n-1){
			temp = ar[i];
			ar[i] = ar[gmark];
			ar[gmark] = temp;
			gmark++;
			ans1++;
		}
		else if(gmark==n-1&&ar[i]>a){
			gmark = i;
		}
		if(ar[i]<a) ans1++;
	}
	if(gmark!=n-1){
		temp = ar[n-1];
		ar[n-1] = ar[gmark];
		ar[gmark] = temp;
	}
	ans1++;
	k = gmark;
	//cout << j <<" "<<k<<" "<<n <<endl;
	quicksort(j, k);
	quicksort(k+1, n);
	return;
}
int main(void) {
   int _ar_size, arr[10005];
   cin >> s;
    
    for(int _ar_i=0; _ar_i<s; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        ar.push_back(_ar_tmp); 
        arr[_ar_i] = _ar_tmp;
    }
    ans1 = 0;
	quicksort(0, s);
	insertionSort(s, arr);
	cout << ans2-ans1;
	return 0;
}
