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
	long long int a, b, red, h, i, j, n, p;
	cin >> n;
	bool idf[n+1];
	memset(idf, false, sizeof idf);
	for(j = 0; j<2; j++){
		cin >> p;
		for(i = 0; i < p; i++){
			cin >> a;
			idf[a] = true;
		}
	}
	for(i = 1; i <= n; i++){
		if(!idf[i]){
			cout << "Oh, my keyboard!"  << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;
	return 0;
}
