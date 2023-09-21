#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	int caseno, j = 1;
	double ab, ac, bc, x, ad;
	cin >> caseno;
	while(caseno--){
		cin >> ab >> ac >> bc >> x;
		ad = ab/sqrt(1+1/x);
		printf("Case %d: %.8lf\n", j, ad);
		j++;
	}
	return 0;
}
