#include <queue>
#include <iostream>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
using namespace std;

int main(){
	long long int n, k, i, a, ans, c, d, tmp, tmp2, swap;
	int array[105];
	bool flag;
	char str[105], temp;
	cin >> n;
	tmp = 0;
	for(i=0; i<n; i++){
		cin >> array[i];
		tmp += array[i];
	}
	for (c = 0 ; c < ( n - 1 ); c++){
	    for (d = 0 ; d < n - c - 1; d++){
		    if (array[d] < array[d+1]){
		    	swap = array[d];
		        array[d] = array[d+1];
		        array[d+1] = swap;
		    }
	    }
	}
	ans = 0;
	tmp2 = 0;
	for(i=0; i<n; i++){
		if(tmp>=tmp2){
			tmp -= array[i];
			tmp2 += array[i];
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
