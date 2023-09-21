#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>

using namespace std;
#define nmax 1000000
#define mod 1000003

double hrm[1000006];

void harc(){
	hrm[0] = 0;
	double j = 1;
	for(int i=1;i<1000001;i++){
		hrm[i] = hrm[i-1] + 1/j;
		j++;
	}
}


int main(){
	long long int t, j, k, b, sum, suff;
	harc();
	cin >> t;
	for (j = 1; j<=t; j++){
		scanf("%lld", &b);
		if(b<=1000000){
			printf("Case %d: %lld\n", j, int(b*hrm[b]));
		}
		else{
			double ans;
			double l = 0.5772156649;
			double n = b;
			ans = l + log(n) + 1/(2*n) - 1/(12*n*n) + 1/(120*n*n*n*n) -1/(256*n*n*n*n*n*n) + 1/(240*n*n*n*n*n*n*n*n) ;
			printf("Case %d: %.9lf\n", j, ans);
		}
	}
	return 0;
}
