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
void partition(vector <int>  ar, int n) {
	vector <int> right;
	vector <int> equal;
	vector <int> left;
	int a = ar[0];
	int temp;
	equal.push_back(a);
	for(int i=1; i<n; i++){
		temp = ar[i];
		if(ar[i]>a) right.push_back(temp);
		else if(ar[i]==a) equal.push_back(temp);
		else if(ar[i]<a) left.push_back(temp);
	}
	for(int i=0; i<left.size(); i++) cout << left[i] << " ";
	for(int i=0; i<equal.size(); i++) cout << equal[i] << " ";
	for(int i=0; i<right.size(); i++) cout << right[i] <<" ";
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar, _ar_size);
   
   return 0;
}
