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
	char str[1005], temp;
	cin >> str;
	n = strlen(str);
	flag = false;
	for(i=0; i<n; i++){
		if(i==0){
			str[i] = toupper(str[i]);
		}
		cout << str[i];
	}
	cout << endl;
	return 0;
}
