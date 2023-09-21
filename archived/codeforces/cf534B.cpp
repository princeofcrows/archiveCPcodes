#include <queue>
#include <iostream>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	int v1, v2, t, d;
	cin >> v1 >> v2;
	cin >> t>> d;
	int road1[t+2], road2[t+2], ans = 0;
	road1[1] = v1;
	road2[t] = v2;
	for(int i=2; i<=t; i++){
		road1[i] = road1[i-1]+d;
	}
	for(int i=t-1; i>=1; i--){
		road2[i] = road2[i+1]+d;
	}
	for(int i=1; i<=t; i++){
		ans+=min(road2[i], road1[i]);
		//cout <<min(road2[i], road1[i])<<" ";
	}
	//cout <<endl;
	cout <<ans;
	return 0;
}
