#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
	long long int m, n, ans, l, i, t, j, a, d, c, swap;
	bool flag;
	char str[55], temp;
	ans = 0;
	cin >> n >> m;
	int array[m];
	for(i = 0; i<m; i++){
		cin >> array[i];
	}
	for (c = 0 ; c < ( m - 1 ); c++){
	    for (d = 0 ; d < m - c - 1; d++){
		    if (array[d] > array[d+1]){
		    	swap = array[d];
		        array[d] = array[d+1];
		        array[d+1] = swap;
		    }
		}
	}
	ans = array[n-1]-array[0];
	for(i = 0; i+n-1<m; i++){
		t = array[i+n-1]-array[i];
		if(t<ans){
			ans = t;
		}
	}
	cout << ans << endl;
	return 0;
}
