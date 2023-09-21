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
	long long int a, b, red, h;
	cin >> a >> b;
	red = 0;
	h = 0;
	while(a){
		h += a;
		red += a%b;
		a = a/b;
		if(red>=b){
			a += red/b;
			red%=b;
		}
	}
	cout << h << endl;
	return 0;
}
