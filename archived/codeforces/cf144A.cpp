#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	long long int a, b, red, h, i, min, mx, mnp, mxp, n;
	cin >> n;
	mx = 0;
	min = 200;
	mxp = 0;
	mnp = n;
	for(i = 1; i <= n; i++){
		cin >> a;
		if(a>mx){
			mx = a;
			mxp = i;
		}
		if(a<=min){
			min = a;
			mnp = i;
		}
	}
	h = (mxp-1)+(n-mnp);
	if(mnp<=mxp) h--;
	cout << h << endl;
	return 0;
}
