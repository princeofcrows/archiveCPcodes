#include <iostream>
using namespace std;

#define div3(n) (n/3*2 + (n%3==2))

int main(){
	int T, t, x, y;
	cin >> T;
	t = 1;
	while(T--) {
		cin >> x >> y;
		x--;
		cout << "Case " << t <<": "<< div3(y) - div3(x)<<endl;
		t++;
	}
	return 0;
}
