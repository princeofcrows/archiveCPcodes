#include <iostream>
using namespace std;

int main(){
	int T, t, i, j, k, n, r, o, p;
	cin>>T;
	t = 1;
	while(T--){
		cin >> k >> n;
		if(k){
			p = n*3/2;
			r = 2*n;
			o = p+r+n;
			cout << "Case " << t <<":"<<endl<< p << "\n" << r << "\n" << o << endl;
		}
		else{
			p = n/3;
			n = n - n/3;
			o = n/3;
			cout << "Case " << t <<":"<<endl<< p << "\n" << 2*o << "\n" << o << endl;
		}
		t++;
	}
	return 0;
}
