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
	int ara[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
	char str[5], temp;
	cin >> n;
	flag = false;
	for(i=0; i<13; i++){
		if(n<ara[i]){
			break;
		}
		else if(n%ara[i]==0){
			flag = true;
			cout << "YES" << endl;
			break;
		}
	}
	if(!flag)	cout << "NO" << endl;
	return 0;
}
