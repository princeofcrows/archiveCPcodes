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
	long long int n, len;
	cin >> len;
	for(;len!=0; len--){
		char str[105];
		cin >> str;
		n = strlen(str);
		if(n<=10){
			cout << str << endl;
		}
		else{
			cout << str[0]<<n-2<<str[n-1] << endl;
		}
	}
	return 0;
}
