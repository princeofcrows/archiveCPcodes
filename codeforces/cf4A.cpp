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
	long long int n;
	
	cin >> n;
	if(n<=2||n%2!=0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
	return 0;
}
