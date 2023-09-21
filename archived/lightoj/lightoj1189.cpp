#include <iostream>
using namespace std;

long long int f[21], ans[21], n;

int main(){
	int T, t, y = 1, z = 0;
	f[0] = 1;
	while(y<21){
		f[y] = f[y-1]*y;
		y++;
	}
	cin >> T;
	t = 1;
	while(T--) {
		cin >> n;
		y = 20;
		z = 0;
		while(n>0&&y>=0){
			if(n>=f[y]){
				n = n - f[y];
				ans[z] = y;
				z++;
			}
			y--;
		}
		cout << "Case " << t <<": ";
		if(n!=0){
			cout << "impossible" << endl;
		}
		else {
			z--;
			cout << ans[z] << "!";
			while(z!=0){
			z--;
			cout << "+" << ans[z] << "!";
			}
			cout << endl;	
		}
		t++;
	}
	return 0;
}
