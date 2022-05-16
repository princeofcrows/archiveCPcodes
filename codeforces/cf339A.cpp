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
	long long int n, k, i, a, temp, ans, c1, c2, c3;
	bool flag;
	string str, str2;
	cin >> str;
	n = str.length();
	
	c1 = c2 = c3 = 0;
	for(i=0; i<n; i+=2){
		if(str[i]=='1'){
			c1++;
		} 
		else if(str[i]=='2'){
			c2++;
		} 
		else if(str[i]=='3'){
			c3++;
		} 
	}
	for(i=0; i<n; i+=2){
		if(c1>0){
			cout << "1";
			c1--;
		} 
		else if(c2>0){
			cout << "2";
			c2--;
		} 
		else if(c3>0){
			cout << "3";
			c3--;
		}
		if(i!=n-1) cout << "+";
		else cout << endl;
	}
	return 0;
}
