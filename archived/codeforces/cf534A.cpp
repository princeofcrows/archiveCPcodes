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
	long long int n, k, g, t, temp, temp2, ans = 0;
	cin >> n;
	if(n==1){
		cout << 1<<endl<<1;
		return 0;
	}
	if(n==2){
		cout << 1<<endl<<2;
		return 0;
	}
	if(n==3){
		cout << 2<<endl;
		cout << 1 <<" "<<3;
		return 0;
	}
	if(n==4){
		cout << 4<<endl;
		cout << 3<<" "<<1 <<" "<<4<<" "<<2;
		return 0;
	}
	cout << n<<endl;
	for(int i=1; i<=n; i+=2){
		cout << i<<" ";
	}
	for(int i=2; i<=n; i+=2){
		cout << i<<" ";
	}
	return 0;
}
