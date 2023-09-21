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
void quicksort(int j, int n) {
	if(j>=n-1) return;
	int a = ar[j];
	int temp, k;
	k = j;
	vector<int>::iterator it;
	it = ar.begin()+j;
	for(int i=j+1; i<n; i++){
		temp = ar[i];
		if(temp<a){
			ar.erase(ar.begin()+i);
			ar.insert (it,temp);
			it++;
			k++;
		}
	}
	quicksort(j, k);
	quicksort(k+1, n);
	for(int i=j; i<n; i++) cout << ar[i] << " ";
	cout<<endl;
}
int main(void) {
   int _ar_size;
   cin >> _ar_size;
    
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        ar.push_back(_ar_tmp); 
    }
    
   quicksort(0, _ar_size);
   
   return 0;
}
