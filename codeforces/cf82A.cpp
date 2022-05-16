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
	long long int k, w, n, ans, l, i, t, j;
	bool flag;
	ans = 5;
	cin >> n;
	while(n>ans){
		n -= ans;
		ans *= 2;
	}
	ans = ans/5;
	i = 1;
	while(n>ans){
		n -= ans;
		i++;
	}
	if(i==1) cout << "Sheldon" << endl;
	else if(i==2) cout << "Leonard" << endl;
	else if(i==3) cout << "Penny" << endl;
	else if(i==4) cout << "Rajesh" << endl;
	else if(i==5) cout << "Howard" << endl;
	return 0;
}
