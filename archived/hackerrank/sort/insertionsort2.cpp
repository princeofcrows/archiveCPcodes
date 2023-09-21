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


void insertionSort(vector <int>  ar, int _ar_size) {
	int temp, e;
	for(int i = 1; i<_ar_size; i++){
		for(int j = i; j>0; j--){
			if(ar[j]<ar[j-1]){
				temp = ar[j];
				ar[j] = ar[j-1];
				ar[j-1] = temp;
			}
		}
		for(int i = 0; i<_ar_size; i++){
			cout << ar[i];
			if(i!=_ar_size-1) cout << " ";
		}
		cout << endl;
	}
}
int main() {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar, _ar_size);
    return 0;
}

