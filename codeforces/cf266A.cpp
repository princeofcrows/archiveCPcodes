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
	long long int n, k, i, a, ans, c1, c2, c3, tmp;
	bool flag;
	char str[55], temp;
	cin >> n;
	cin >> str;
	ans = 0;
	temp = str[0];
	tmp = 0;
	for(i=1; i<n; i++){
		if(str[i] == temp){
			tmp++;
		}
		else{
			temp = str[i];
		}
	}
	cout <<tmp <<endl;
	return 0;
}
