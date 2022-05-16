#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>
#include <cmath>

#define nmax 1000007

using namespace std;

vector <int> prime;

void seive(){
	int i, j;
	bool pr[nmax];
	memset(pr, true, sizeof pr);
	for(i = 2; i<nmax; i++){
		if(pr[i]){
			prime.push_back(i);
			for(j = 2*i; j<nmax; j+=i){
				pr[j] = false;
			}
		}
	}
}

int main(){
	unsigned long long int t, j, n, k, i, ans, sqr;
	seive();
	cin >> t;
	for (j = 1; j<=t; j++){
		cin >> n;
		ans = 1;
		sqr = sqrt(n);
		for(i = 0; i<prime.size() and prime[i]<=sqr; i++){
			
			if(n<prime[i]){
				break;	
			} 
			k = 0;
			while(n%prime[i]==0){
				n = n/prime[i];
				k++;
				if(n==0||n==1){
					break;
				}
			}
			ans *=(k+1);
		}
		if (ans<=1) ans *= 2;
		ans--;
		cout << "Case "<< j << ": "<< ans << endl;
	}
	return 0;
}
