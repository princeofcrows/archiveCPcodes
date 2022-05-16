#include <iostream>
using namespace std;

int main(){
	unsigned long long int T, t, i, j, k, n, m, nmax, mmax, ans1, ans2, a, b;
	cin>>T;
	t = 1;
	while(T--){
		cin >> n >> m;
		a = nmax = mmax = ans1 = ans2 = 0;
		for(i=0; i<n; i++){
			cin >> a;
			ans1+=a;
		}
		for(i=0; i<m; i++){
			cin >> b;
			ans2+=b;
		}
		if(a>=b){
			ans1-=a;
		}
		else{
			ans2-=b;
		}
		cout << "Case " << t <<": "<< ans1+ans2<<endl;
		t++;
	}
	return 0;
}
