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
	int n, k, i, a, temp, ans, m;
	cin >> n;
	ans = 0;
	temp = n;
	for(i = 0; i<(sizeof(lucky))/(sizeof(lucky[0])); i++){
		if(lucky[i]==n){
			cout << i+1;
			break;
		}
	}
	
	return 0;
}
