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
			
		}
		else if(gmark==n-1&&ar[i]>a){
			gmark = i;
		}
	}
	if(gmark!=n-1){
		temp = ar[n-1];
		ar[n-1] = ar[gmark];
		ar[gmark] = temp;
	}
	k = gmark;
	for(int i=0; i<s; i++) cout << ar[i] << " ";
	cout << endl;
	//cout << j <<" "<<k<<" "<<n <<endl;
	quicksort(j, k);
	quicksort(k+1, n);
	return;
}
int main(void) {
   int _ar_size;
   cin >> s;
    
    for(int _ar_i=0; _ar_i<s; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        ar.push_back(_ar_tmp); 
    }
    
   quicksort(0, s);
   
   return 0;
}
