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
	long long int k, w, n, ans, l, i, t, j, a;
	bool flag;
	char str[55], temp;
	ans = 0;
	cin >> n;
	int ara[n+5];
	for(i=0; i<n; i++){
		cin >> a;
		ara[a-1] = i+1;
	}
	for(i=0; i<n; i++){
		cout << ara[i] << " ";
	}
	
	cout << endl;
	return 0;
}
