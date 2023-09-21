#include <iostream>
using namespace std;

int bin(int x){
	int sum = 0;
	while(x!=0){
		sum = sum + x%2;
		x = x/2;
	}
	if (sum%2!=0){
		return 1;
	}
	else {
		return 0;
	}
}

int main(){
	int T, t, y;
	long long int x;
	cin >> T;
	t = 1;
	while(T--) {
		cin >> x;
		y = bin(x);
		if(y){
			cout << "Case " << t <<": odd"<<endl;
		}
		else{
			cout << "Case " << t <<": even"<<endl;
		}
		t++;
	}
}
