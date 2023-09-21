#include <iostream>
#include <queue>
#include <algorithm> 
#include <vector>
#include <utility>
#include <fstream>
#include <climits>
#include <cstring>

using namespace std;

int prime[101];
int fact[101][101];

void primegen(){
	memset(prime, 1, sizeof prime);
	int i, j;
	for(i=2;i<=100;i++){
		if(prime[i]){
			for(j=2*i;j<=100;j+=i){
				prime[j] = 0;
			}
		}
	}
}

void factorgen(){
	int i, j, temp;
	memset(fact, 0, sizeof fact);
	for(i=2;i<=100;i++){
		j = 2;
		temp = i;
		while(temp!=1){
			while(temp%j == 0){
				fact[i][j]++;
				temp = temp/j;
			}
			j++;
		}
	}
}

void sumgen(){
	int i, j;
	for(i=2;i<=100;i++){
		if(prime[i]){
			for(j=2;j<=100;j++){
				fact[j][i] += fact[j-1][i];
			}
		}
	}
}

int main(){
	int a, b, w, j, n, m, i,t;
	primegen();
	factorgen();
	sumgen();
	
	cin >> t;
	n = 0;
	for (j = 1; j<=t; j++){
		
		cin >> n;
		
		cout << "Case "<<j<<": "<<n<<" =";
		for(i=2;i<=100;i++){
			if(prime[i]&&fact[n][i]!=0){
				if(i!=2)	cout << " * "<<i<<" ("<< fact[n][i]<<")";
				else if(i==2)	cout << " "<<i<<" ("<< fact[n][i]<<")";
			}
		}
		cout << endl;
	}
	return 0;
}
