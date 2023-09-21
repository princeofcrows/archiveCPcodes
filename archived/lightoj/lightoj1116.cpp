#include <iostream>
using namespace std;

int main(){
	int T, t;
	cin>>T;
	t = 1;
	long long int W, N, M;
	while(T--){
		M = 2;
		cin >> W;
		if(W%2==1){
			cout << "Case " << t <<": "<< "Impossible" << endl;
			t++;
			continue;
		}
		N = W/2;
		while(N%2!=1){
			N = N/2;
			M = M*2;
		}
		cout << "Case " << t <<": "<< N << " " << M <<endl;
		t++;
	}
	return 0;
}
